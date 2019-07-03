#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <vector>
using std::vector;

#include "SoftwareDeSeguranca.h"
#include "Firewall.h"
#include "Antispyware.h"
#include "Antivirus.h"
#include "McAfee.h"
#include "Panda.h"

using std::cout;
using std::cin;
using std::string;

int main(int argc, char **argv)
{
 
	vector< SoftwareDeSeguranca * > seguranca;
    seguranca.push_back(new Firewall("192.168.0.2", "255.255.255.0") );
    seguranca.push_back(new Firewall("168.192.0.1", "255.255.255.0") );
    seguranca.push_back(new Antispyware("McAfee", "Antivirus") );
    seguranca.push_back(new Antispyware( "Panda", "Antivirus") );
    
    
    
    for( size_t i = 0; i < seguranca.size( ); i++ )
	{
		cout << "deleting object of "
		<< typeid( *seguranca[ i ] ).name() << '\n';
		delete seguranca[ i ];
	}
    
    
}
