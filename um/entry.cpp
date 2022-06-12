#include <windows.h>
#include <TlHelp32.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "bytes.h"
#include "kinterface.h"
#include "utils.h"
#include "mmap.h"

void main( )
{
	const auto pid = utils::get_process_id( "RustClient.exe" );

	if ( pid )
	{
		printf( "game found %i\n", pid );

		kinterface->initialize( );

		printf( "kinterface intialized.\n" );

		mmap->map( pid, utils::read_file( "default.dll" ).data( ) );
	}
	else
	{
		printf( "game not found\n" );
	}

	kinterface->unload( );
	printf( "kinterface unloaded.\n" );

	std::cin.get( );
}