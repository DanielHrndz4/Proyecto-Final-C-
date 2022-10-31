#include <iostream>
using namespace std;

struct Nodo
{
    string nombre;
    int edad;
    string sexo;
    string DUI;
    string departamento;
    string municipio;
    struct Nodo *siguiente;
};

struct Nodo *lista = NULL;

void Insertar(string nombrePer, int edadPer, string sexoPer, string DUIPer, string departamentoPer, string municipioPer)
{
    struct Nodo *nuevoNodo = new Nodo();
    if (nuevoNodo != NULL)
    {
        nuevoNodo->nombre = nombrePer;
        nuevoNodo->edad = edadPer;
        nuevoNodo->sexo = sexoPer;
        nuevoNodo->DUI = DUIPer;
        nuevoNodo->departamento = departamentoPer;
        nuevoNodo->municipio = municipioPer;
        nuevoNodo->siguiente = NULL;
        if (lista == NULL)
        {
            lista = nuevoNodo;
        }
        else
        {
            nuevoNodo->siguiente = lista;
            lista = nuevoNodo;
        }
    }
    else
    {
        cout << "No se pueden agregar mas nodos" << endl;
    }
}

void Imprimir()
{
    struct Nodo *temporal = lista;
    int contadorNino = 0;
    int contadorNina = 0;
    int contadorHombre = 0;
    int contadorMujer = 0;
    if (lista != NULL)
    {
        while (temporal != NULL)
        {
            if ((temporal->edad < 18) && (temporal->sexo == "MASCULINO"))
            {
                cout << "=============================" << endl;
                cout << "Nombre: " << temporal->nombre << endl;
                cout << "Edad: " << temporal->edad << endl;
                cout << "Sexo: " << temporal->sexo << endl;
                cout << "Departamento: " << temporal->departamento << endl;
                cout << "Municipio: " << temporal->municipio << endl;
                cout << "=============================" << endl;
                contadorNino++;
            }
            else if ((temporal->edad < 18) && (temporal->sexo == "FEMENINO"))
            {
                cout << "=============================" << endl;
                cout << "Nombre: " << temporal->nombre << endl;
                cout << "Edad: " << temporal->edad << endl;
                cout << "Sexo: " << temporal->sexo << endl;
                cout << "Departamento: " << temporal->departamento << endl;
                cout << "Municipio: " << temporal->municipio << endl;
                cout << "=============================" << endl;
                contadorNina++;
            }
            else if ((temporal->edad >= 18) && (temporal->sexo == "MASCULINO"))
            {
                cout << "=============================" << endl;
                cout << "Nombre: " << temporal->nombre << endl;
                cout << "Edad: " << temporal->edad << endl;
                cout << "Sexo: " << temporal->sexo << endl;
                cout << "DUI: " << temporal->DUI << endl;
                cout << "Departamento: " << temporal->departamento << endl;
                cout << "Municipio: " << temporal->municipio << endl;
                cout << "=============================" << endl;
                contadorHombre++;
            }
            else if ((temporal->edad >= 18) && (temporal->sexo == "FEMENINO"))
            {
                cout << "=============================" << endl;
                cout << "Nombre: " << temporal->nombre << endl;
                cout << "Edad: " << temporal->edad << endl;
                cout << "Sexo: " << temporal->sexo << endl;
                cout << "DUI: " << temporal->DUI << endl;
                cout << "Departamento: " << temporal->departamento << endl;
                cout << "Municipio: " << temporal->municipio << endl;
                cout << "=============================" << endl;
                contadorMujer++;
            }
            else
            {
                cout << "Elemento no encontrador!" << endl;
            }
            temporal = temporal->siguiente;
        }
        cout << "=============================" << endl;
        cout << "Total de Niños: " << contadorNino << endl;
        cout << "Total de Niñas: " << contadorNina << endl;
        cout << "Total de Hombres: " << contadorHombre << endl;
        cout << "Total de Mujeres: " << contadorMujer << endl;
        cout << "=============================" << endl
             << endl
             << endl
             << endl;
    }
}

void ImprimirDep()
{
    cout << "[1] Ahuachapán" << endl;
    cout << "[2] Santa Ana" << endl;
    cout << "[3] Sonsonate" << endl;
    cout << "[4] La Libertad" << endl;
    cout << "[5] Chalatenango" << endl;
    cout << "[6] Cuscatlán" << endl;
    cout << "[7] San Salvador" << endl;
    cout << "[8] La Paz" << endl;
    cout << "[9] Cabañas" << endl;
    cout << "[10] San Vicente" << endl;
    cout << "[11] Usulután" << endl;
    cout << "[12] San Miguel" << endl;
    cout << "[13] Morazán" << endl;
    cout << "[14] La Unión" << endl;
}

void ImprimirAhuachapan()
{
    cout << "       ..,." << endl;
    cout << "     .ok0XWXOx;" << endl;
    cout << "    .cxXWMMMMMMWo.         AAA   HH   HH UU   UU   AAA    CCCCC  HH   HH   AAA   PPPPPP    AAA   NN   NN" << endl;
    cout << "   .:OWMMMMMMMXxc.        AAAAA  HH   HH UU   UU  AAAAA  CC    C HH   HH  AAAAA  PP   PP  AAAAA  NNN  NN  " << endl;
    cout << "   ,OWMMMMMMMMMO'        AA   AA HHHHHHH UU   UU AA   AA CC      HHHHHHH AA   AA PPPPPP  AA   AA NN N NN " << endl;
    cout << "   lNMMMMMMMMMWx.        AAAAAAA HH   HH UU   UU AAAAAAA CC    C HH   HH AAAAAAA PP      AAAAAAA NN  NNN" << endl;
    cout << "   .oOXWMNKKNWO,         AA   AA HH   HH  UUUUU  AA   AA  CCCCC  HH   HH AA   AA PP      AA   AA NN   NN " << endl;
    cout << "      .;:,..':." << endl
         << endl;
}

void ImprimirSantaAna()
{
    cout << "           .,'.'ldoxOo,   " << endl;
    cout << "           ,0X0XMMMMMMNd.  " << endl;
    cout << "           .lKMMMMMMMMMW0, " << endl;
    cout << "             cOXMMMMMMW0o. " << endl;
    cout << "          .':dOXMMMMMM0,   " << endl;
    cout << "      .:xk0NWMMMMMMWOl,   " << endl;
    cout << "     .xWMMMMMMMMMMNo.   " << endl;
    cout << "     lWMMMMMMMMMMMk.   " << endl;
    cout << "     .xNMMMMMMMMMMXl.   " << endl;
    cout << "      ;KMMMMMMMMMMWo.        SSSSS    AAA   NN   NN TTTTTTT   AAA        AAA   NN   NN   AAA" << endl;
    cout << "     .c0WMMMMMMMMk;.        SS       AAAAA  NNN  NN   TTT    AAAAA      AAAAA  NNN  NN  AAAAA" << endl;
    cout << "       .c0WMMMMMWo           SSSSS  AA   AA NN N NN   TTT   AA   AA    AA   AA NN N NN AA   AA" << endl;
    cout << "         .;::dk00:               SS AAAAAAA NN  NNN   TTT   AAAAAAA    AAAAAAA NN  NNN AAAAAAA " << endl;
    cout << "               ..            SSSSS  AA   AA NN   NN   TTT   AA   AA    AA   AA NN   NN AA   AA " << endl
         << endl;
}

void ImprimirSonsonate()
{
    cout << "          .',,,." << endl;
    cout << "          ;KWWWKl." << endl;
    cout << "          oWMMMMWKkkxc'." << endl;
    cout << "         'OMMMMMMMMMMW0,     SSSSS   OOOOO  NN   NN  SSSSS   OOOOO  NN   NN   AAA   TTTTTTT EEEEEEE" << endl;
    cout << "    'c;.'OMMMMMMMMMMNx.     SS      OO   OO NNN  NN SS      OO   OO NNN  NN  AAAAA    TTT   EE    " << endl;
    cout << "    'lk0XWMMMMMMMMMWx.       SSSSS  OO   OO NN N NN  SSSSS  OO   OO NN N NN AA   AA   TTT   EEEEE " << endl;
    cout << "       ,kWMMMMMMMMWx.            SS OO   OO NN  NNN      SS OO   OO NN  NNN AAAAAAA   TTT   EE  " << endl;
    cout << "        .dOOOkkkOOc.         SSSSS   OOOO0  NN   NN  SSSSS   OOOO0  NN   NN AA   AA   TTT   EEEEEEE " << endl
         << endl;
}

void ImprimirLaLibertad()
{
    cout << "            .;c'    " << endl;
    cout << "           'OWMO.   " << endl;
    cout << "          .dWMMNd.  " << endl;
    cout << "         ;KWMMMMK;  " << endl;
    cout << "         :XMMMMWd.  " << endl;
    cout << "         oWMMMMK;   " << endl;
    cout << "       .l0WMMMMO.   " << endl;
    cout << "      .kWMMMMMMNx.             LL        AAA      LL      IIIII BBBBB   EEEEEEE RRRRRR  TTTTTTT   AAA   DDDDD" << endl;
    cout << "     .kWMMMMMMMMX:             LL       AAAAA     LL       III  BB   B  EE      RR   RR   TTT    AAAAA  DD  DD" << endl;
    cout << "    ;OWMMMMMMMMMNc             LL      AA   AA    LL       III  BBBBBB  EEEEE   RRRRRR    TTT   AA   AA DD   DD " << endl;
    cout << "    ,cloooooxOO0Xx;'.          LL      AAAAAAA    LL       III  BB   BB EE      RR  RR    TTT   AAAAAAA DD   DD " << endl;
    cout << "               .':oo.          LLLLLLL AA   AA    LLLLLLL IIIII BBBBBB  EEEEEEE RR   RR   TTT   AA   AA DDDDDD" << endl
         << endl;
}

void ImprimirChalatenango()
{
    cout << "            ,c:'.  ''   " << endl;
    cout << "        .;OX0xkX0:'.    " << endl;
    cout << "          lNMMMMMWWx.   " << endl;
    cout << "        ,kNMMMMMMMMWO;. " << endl;
    cout << "      .;kMMMMMMMMMMMMN0Od,         CCCCC  HH   HH   AAA   LL        AAA   TTTTTTT EEEEEEE NN   NN   AAA   NN   NN   GGGG   OOOOO" << endl;
    cout << "     cKWMMMMMMMMMMMMMMMMMKl,'..   CC      HH   HH  AAAAA  LL       AAAAA    TTT   EE      NNN  NN  AAAAA  NNN  NN  GG  GG OO   OO " << endl;
    cout << "    ,OOdodxkkkdoxOKNMMMMMMWWN0:.  CC      HHHHHHH AA   AA LL      AA   AA   TTT   EEEEE   NN N NN AA   AA NN N NN GG      OO   OO" << endl;
    cout << "    ...           .cXMMMMMMWXko,  CC      HH   HH AAAAAAA LL      AAAAAAA   TTT   EE      NN  NNN AAAAAAA NN  NNN GG   GG OO   OO" << endl;
    cout << "                   .:ddxxdc;.      CCCCC  HH   HH AA   AA LLLLLLL AA   AA   TTT   EEEEEEE NN   NN AA   AA NN   NN  GGGGGG  OOOO0" << endl
         << endl;
}

void ImprimirCuscatlan()
{
    cout << "     .::,.  " << endl;
    cout << "     lWMWO' " << endl;
    cout << "    .xMMMWk;'.  " << endl;
    cout << "     'kWMMMOc'  " << endl;
    cout << "     .oXMMM0o:.                      CCCCC  UU   UU  SSSSS   CCCCC    AAA   TTTTTTT LL        AAA   NN   NN " << endl;
    cout << "       ;kNMMMW0c.                   CC    C UU   UU SS      CC    C  AAAAA    TTT   LL       AAAAA  NNN  NN" << endl;
    cout << "        .oNMMMMW0,                  CC      UU   UU  SSSSS  CC      AA   AA   TTT   LL      AA   AA NN N NN " << endl;
    cout << "         .oNWMWXx.                  CC    C UU   UU      SS CC    C AAAAAAA   TTT   LL      AAAAAAA NN  NNN " << endl;
    cout << "           ';c:'.                    CCCCC   UUUUU   SSSSS   CCCCC  AA   AA   TTT   LLLLLLL AA   AA NN   NN " << endl
         << endl;
}

void ImprimirSanSalvador()
{
    cout << "     .;ccc:'    " << endl;
    cout << "     .xWMXO;    " << endl;
    cout << "      'dNKx;    " << endl;
    cout << "       lNWNx.   " << endl;
    cout << "      '0MWNO:.  " << endl;
    cout << "      oWMMMMNk;.    " << endl;
    cout << "     .kMMMMMMMXc    " << endl;
    cout << "      ,kWMMMMO:.               SSSSS    AAA   NN   NN     SSSSS    AAA   LL      VV     VV   AAA   DDDDD    OOOOO  RRRRRR" << endl;
    cout << "       cNWNK0l.               SS       AAAAA  NNN  NN    SS       AAAAA  LL      VV     VV  AAAAA  DD  DD  OO   OO RR   RR" << endl;
    cout << "       ;XNKo.                  SSSSS  AA   AA NN N NN     SSSSS  AA   AA LL       VV   VV  AA   AA DD   DD OO   OO RRRRRR  " << endl;
    cout << "       ,0NXo.                      SS AAAAAAA NN  NNN         SS AAAAAAA LL        VV VV   AAAAAAA DD   DD OO   OO RR  RR " << endl;
    cout << "        .,'.                   SSSSS  AA   AA NN   NN     SSSSS  AA   AA LLLLLLL    VVV    AA   AA DDDDDD   OOOO0  RR   RR " << endl
         << endl;
}

void ImprimirLaPaz()
{
    cout << "       ;kd,.. .." << endl;
    cout << "     ..xWMNKOxOd." << endl;
    cout << "    .lKWMMMMMMMNkl." << endl;
    cout << "    .dWMMMMMMMMMMWo" << endl;
    cout << "    .OMMMMMMMMMMMWl             LL        AAA      PPPPPP    AAA   ZZZZZ" << endl;
    cout << "    .oXWMMMMMMMMMWO,            LL       AAAAA     PP   PP  AAAAA     ZZ" << endl;
    cout << "      .:dOXWWMMMMMWd.           LL      AA   AA    PPPPPP  AA   AA   ZZ" << endl;
    cout << "          .,;okKNWO'            LL      AAAAAAA    PP      AAAAAAA  ZZ " << endl;
    cout << "               .;:.             LLLLLLL AA   AA    PP      AA   AA ZZZZZ" << endl
         << endl;
}

void ImprimirCab()
{
    cout << "                ..,." << endl;
    cout << "         .';lxOO0XWXkoc,         CCCCC    AAA   BBBBB     AAA   =======   AAA    SSSSS" << endl;
    cout << "    .ckkx0NWMMMMMMMMMMWo        CC    C  AAAAA  BB   B   AAAAA  NNN  NN  AAAAA  SS" << endl;
    cout << "    ,OWMMMMMMMMMMMMMMMMk.       CC      AA   AA BBBBBB  AA   AA NN N NN AA   AA  SSSSS " << endl;
    cout << "     .:OWMMWNKKKXXWMMMWo.       CC    C AAAAAAA BB   BB AAAAAAA NN  NNN AAAAAAA      SS" << endl;
    cout << "       .;ll;'.....,lkKd.         CCCCC  AA   AA BBBBBB  AA   AA NN   NN AA   AA  SSSSS " << endl
         << endl;
}

void ImprimirSanVicente()
{
    cout << "       .';:;,,. " << endl;
    cout << "     ;k0NWMWWWXkl;'" << endl;
    cout << "    '0MMMMMMMMMMMMXc." << endl;
    cout << "    oWMMMMMMMMMMMKc." << endl;
    cout << "    'lOWMMMMMMXxo' " << endl;
    cout << "      .OMMMMWk' " << endl;
    cout << "      .kMMMMX;  " << endl;
    cout << "      .lXMMNo.                   SSSSS    AAA   NN   NN    VV     VV IIIII  CCCCC  EEEEEEE NN   NN TTTTTTT EEEEEEE" << endl;
    cout << "       .xXKc                    SS       AAAAA  NNN  NN    VV     VV  III  CC    C EE      NNN  NN   TTT   EE      " << endl;
    cout << "       ,0k:.                     SSSSS  AA   AA NN N NN     VV   VV   III  CC      EEEEE   NN N NN   TTT   EEEEE   " << endl;
    cout << "      'l:.                           SS AAAAAAA NN  NNN      VV VV    III  CC    C EE      NN  NNN   TTT   EE      " << endl;
    cout << "      ..                         SSSSS  AA   AA NN   NN       VVV    IIIII  CCCCC  EEEEEEE NN   NN   TTT   EEEEEEE " << endl
         << endl;
}

void ImprimirUsulutan()
{
    cout << "               .,:,.    " << endl;
    cout << "             .l0NMW0d,  " << endl;
    cout << "          .,cOWMMMMMK;  " << endl;
    cout << "         'kNMMMMMMMMX;  " << endl;
    cout << "        .dMMMMMMMMMMNc  " << endl;
    cout << "        :KMMMMMMMMMM0'  " << endl;
    cout << "       lNMMMMMMMMMMMX:             UU   UU  SSSSS  UU   UU LL      UU   UU TTTTTTT   AAA   NN   NN " << endl;
    cout << "      '0MMMMMMMMMMMMWKo:'          UU   UU SS      UU   UU LL      UU   UU   TTT    AAAAA  NNN  NN" << endl;
    cout << "    'o0XOkdoxkXNXXWMMMWk:oo.       UU   UU  SSSSS  UU   UU LL      UU   UU   TTT   AA   AA NN N NN" << endl;
    cout << "    .:lc;,:ll,:d;.cKMXK0ONNx:.     UU   UU      SS UU   UU LL      UU   UU   TTT   AAAAAAA NN  NNN" << endl;
    cout << "          .......  :o''lkO00Oo.     UUUUU   SSSSS   UUUUU  LLLLLLL  UUUUU    TTT   AA   AA NN   NN " << endl
         << endl;
}

void ImprimirSanMiguel()
{
    cout << "      ',ldookX0,    " << endl;
    cout << "     cXWWMMMMWx.    " << endl;
    cout << "    ,KMMMMMMMMXl.   " << endl;
    cout << "    .lk0NMMMMWx'    " << endl;
    cout << "       .,lOWMWO:.   " << endl;
    cout << "          oWMMMWOolc.   " << endl;
    cout << "         .xMMMMMMMMWOllo,   " << endl;
    cout << "          lWMMMMMMMMMMMWl   " << endl;
    cout << "         .xMMMMMMMMMMMMK,   " << endl;
    cout << "         .xMMMMMMMMMMMMNc             SSSSS    AAA   NN   NN    MM    MM IIIII   GGGG  UU   UU EEEEEEE LL " << endl;
    cout << "          'ok0WMMMMMMMMK,            SS       AAAAA  NNN  NN    MMM  MMM  III   GG  GG UU   UU EE      LL " << endl;
    cout << "            .;:l0WMMMMMO'             SSSSS  AA   AA NN N NN    MM MM MM  III  GG      UU   UU EEEEE   LL " << endl;
    cout << "            ..  :xOXMMNo.                 SS AAAAAAA NN  NNN    MM    MM  III  GG   GG UU   UU EE      LL    " << endl;
    cout << "                   ,xk;               SSSSS  AA   AA NN   NN    MM    MM IIIII  GGGGGG  UUUUU  EEEEEEE LLLLLLL " << endl
         << endl;
}

void ImprimirMorazan()
{
    cout << "      ;dodkdc.  " << endl;
    cout << "    .c0NMMMWNO, " << endl;
    cout << "     lWMMMMMMMXxdo. " << endl;
    cout << "    .kWMMMMMMMMMMK, " << endl;
    cout << "     ;0MMMMMMMMMXc.                  MM    MM  OOOOO  RRRRRR    AAA   ZZZZZ   AAA   NN   NN " << endl;
    cout << "    .oKMMMMMMMMMXc                   MMM  MMM OO   OO RR   RR  AAAAA     ZZ  AAAAA  NNN  NN" << endl;
    cout << "    .c0WMMMMMMMMX:                   MM MM MM OO   OO RRRRRR  AA   AA   ZZ  AA   AA NN N NN" << endl;
    cout << "      .:cxNMMMMXl                    MM    MM OO   OO RR  RR  AAAAAAA  ZZ   AAAAAAA NN  NNN" << endl;
    cout << "         .:ccc:'                     MM    MM  OOOO0  RR   RR AA   AA ZZZZZ AA   AA NN   NN " << endl
         << endl;
}

void ImprimirLaUnion()
{
    cout << "            ;;;::.  " << endl;
    cout << "          '0WWWMWKl.    " << endl;
    cout << "          ;KMMMMMMWx.   " << endl;
    cout << "         .xWMMMMMMWo.   " << endl;
    cout << "          oWMMMMMMO.    " << endl;
    cout << "         ,0MMMMMMWl " << endl;
    cout << "       .;OMMMMMMWO' " << endl;
    cout << "       :XMMMMMMMX:  " << endl;
    cout << "      .dWMMMMMMMW0d,    " << endl;
    cout << "      .xWMMMWW0k0kl'    " << endl;
    cout << "      .dWMMMKx, .                      LL        AAA      UU   UU NN   NN IIIII  OOOOO  NN   NN" << endl;
    cout << "      .OMMMMNKx;.                      LL       AAAAA     UU   UU NNN  NN  III  OO   OO NNN  NN " << endl;
    cout << "      '0MMMMMMMNo.                     LL      AA   AA    UU   UU NN N NN  III  OO   OO NN N NN " << endl;
    cout << "     'xNMMWXOkd:.                      LL      AAAAAAA    UU   UU NN  NNN  III  OO   OO NN  NNN" << endl;
    cout << "    .cdxO0k;.                          LLLLLLL AA   AA     UUUUU  NN   NN IIIII  OOOO0  NN   NN " << endl
         << endl;
}

void BusquedaDep(string seleccionDep)
{
    struct Nodo *temporal = lista;
    int contadorNino = 0;
    int contadorNina = 0;
    int contadorHombre = 0;
    int contadorMujer = 0;
    if (lista != NULL)
    {
        system("clear");
        if (seleccionDep == "AHUACHAPAN")
        {
            ImprimirAhuachapan();
        }
        else if (seleccionDep == "SANTA ANA")
        {
            ImprimirSantaAna();
        }
        else if (seleccionDep == "SONSONATE")
        {
            ImprimirSonsonate();
        }
        else if (seleccionDep == "LA LIBERTAD")
        {
            ImprimirLaLibertad();
        }
        else if (seleccionDep == "CHALATENANGO")
        {
            ImprimirChalatenango();
        }
        else if (seleccionDep == "CUSCATLAN")
        {
            ImprimirCuscatlan();
        }
        else if (seleccionDep == "SAN SALVADOR")
        {
            ImprimirSanSalvador();
        }
        else if (seleccionDep == "LA PAZ")
        {
            ImprimirLaPaz();
        }
        else if (seleccionDep == "CABAÑAS")
        {
            ImprimirCab();
        }
        else if (seleccionDep == "SAN VICENTE")
        {
            ImprimirSanVicente();
        }
        else if (seleccionDep == "USULUTAN")
        {
            ImprimirUsulutan();
        }
        else if (seleccionDep == "SAN MIGUEL")
        {
            ImprimirSanMiguel();
        }
        else if (seleccionDep == "MORAZAN")
        {
            ImprimirMorazan();
        }
        else if (seleccionDep == "LA UNION")
        {
            ImprimirLaUnion();
        }

        while (temporal != NULL)
        {
            if (temporal->departamento == seleccionDep)
            {
                if ((temporal->edad < 18) && (temporal->sexo == "MASCULINO"))
                {
                    cout << "=============================" << endl;
                    cout << "Nombre: " << temporal->nombre << endl;
                    cout << "Edad: " << temporal->edad << endl;
                    cout << "Sexo: " << temporal->sexo << endl;
                    cout << "Departamento: " << temporal->departamento << endl;
                    cout << "Municipio: " << temporal->municipio << endl;
                    cout << "=============================" << endl;
                    contadorNino++;
                }
                else if ((temporal->edad < 18) && (temporal->sexo == "FEMENINO"))
                {
                    cout << "=============================" << endl;
                    cout << "Nombre: " << temporal->nombre << endl;
                    cout << "Edad: " << temporal->edad << endl;
                    cout << "Sexo: " << temporal->sexo << endl;
                    cout << "Departamento: " << temporal->departamento << endl;
                    cout << "Municipio: " << temporal->municipio << endl;
                    cout << "=============================" << endl;
                    contadorNina++;
                }
                else if ((temporal->edad >= 18) && (temporal->sexo == "MASCULINO"))
                {
                    cout << "=============================" << endl;
                    cout << "Nombre: " << temporal->nombre << endl;
                    cout << "Edad: " << temporal->edad << endl;
                    cout << "Sexo: " << temporal->sexo << endl;
                    cout << "DUI: " << temporal->DUI << endl;
                    cout << "Departamento: " << temporal->departamento << endl;
                    cout << "Municipio: " << temporal->municipio << endl;
                    cout << "=============================" << endl;
                    contadorHombre++;
                }
                else if ((temporal->edad >= 18) && (temporal->sexo == "FEMENINO"))
                {
                    cout << "=============================" << endl;
                    cout << "Nombre: " << temporal->nombre << endl;
                    cout << "Edad: " << temporal->edad << endl;
                    cout << "Sexo: " << temporal->sexo << endl;
                    cout << "DUI: " << temporal->DUI << endl;
                    cout << "Departamento: " << temporal->departamento << endl;
                    cout << "Municipio: " << temporal->municipio << endl;
                    cout << "=============================" << endl;
                    contadorMujer++;
                }
                else
                {
                    cout << "Elemento no encontrador!" << endl;
                }
            }
            temporal = temporal->siguiente;
        }
        cout << "=============================" << endl;
        cout << "Total de Niños: " << contadorNino << endl;
        cout << "Total de Niñas: " << contadorNina << endl;
        cout << "Total de Hombres: " << contadorHombre << endl;
        cout << "Total de Mujeres: " << contadorMujer << endl;
        cout << "=============================" << endl
             << endl
             << endl
             << endl;
    }
    else
    {
        cout << "\nLista vacia" << endl;
    }
}

void Eliminar(string nombreEliminar)
{
    if (lista != NULL)
    {
        struct Nodo *auxBorrar;
        struct Nodo *anterior = NULL;
        auxBorrar = lista;

        while ((auxBorrar != NULL) && (auxBorrar->nombre != nombreEliminar))
        {
            anterior = auxBorrar;
            auxBorrar = auxBorrar->siguiente;
        }
        if (auxBorrar == NULL)
        {
            system("clear");
            cout << "El elemento no existe!" << endl
                 << endl;
        }
        else if (anterior == NULL)
        {
            lista = lista->siguiente;
            delete auxBorrar;
            system("clear");
            cout << "Elemento eliminado con exito!" << endl
                 << endl;
        }
        else
        {
            anterior->siguiente = auxBorrar->siguiente;
            delete auxBorrar;
            system("clear");
            cout << "Elemento eliminado con exito!" << endl
                 << endl;
        }
    }
    else
    {
        system("clear");
        cout << "El elemento no existe!" << endl
             << endl;
    }
}