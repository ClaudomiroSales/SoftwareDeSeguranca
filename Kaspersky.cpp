#include "Kaspersky.h"

Kaspersky::Kaspersky()
:Antivirus()
{
}

Kaspersky::~Kaspersky()
{
}

Kaspersky::Kaspersky ( const Kaspersky &base )
: Antivirus( base )
{

    
}


ostream &operator <<(ostream & print, const Kaspersky & kaspersky )
{
    print << static_cast < Antivirus >( kaspersky );
    print << "A soma das perguntas foi :  " ;
    
        return print;
}


bool Kaspersky::verificarAmeaca( bool threat )
{
    if ( ameacaKaspersky == true) 
    {
        cout << "Procurando por vírus \n"; 
    }
    else
    {
        cout << "A verificação ficará para outra hora\n" ;
    }
}

bool Kaspersky::fazerAtualizacoes ( bool updateA )
{
    if (atualizacaoKaspersky == true )
    {
        
        cout << " Fazendo atualização no banco de dados do antivirus\n";
    }
    else
    {
        cout << "Você cancelou a atualização\n";
    }
    
}

bool Kaspersky::pontoDeRestauracao ( bool spotA )
{
    if ( pontoKaspersky == true )
    {
        cout << "Seu ponto de restauração está sendo feito \n ";
    }
    else 
    {
        cout << "Você não tem ponto de restauração\n";
    }
}