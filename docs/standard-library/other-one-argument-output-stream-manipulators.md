---
title: Altri manipolatori di flusso di output a un solo argomento
ms.date: 11/04/2016
helpviewer_keywords:
- output streams, one-argument manipulators
ms.assetid: e381dee8-6b16-4cef-805a-4a6a1d2b696b
ms.openlocfilehash: c9e9e7531733ac40022b477980297c80ac488221
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68453443"
---
# <a name="other-one-argument-output-stream-manipulators"></a>Altri manipolatori di flusso di output a un solo argomento

Nell'esempio seguente viene utilizzata una `money`classe, che è un tipo **Long** . Il manipolatore `setpic` allega alla classe una stringa "immagine" di formattazione che può essere usata dall'operatore di inserimento del flusso in overload della classe `money`. La stringa immagine viene archiviata come variabile statica nella classe `money` anziché come membro dati di una classe di flusso, pertanto non è necessario derivare una nuova classe del flusso di output.

## <a name="example"></a>Esempio

```cpp
// one_arg_output.cpp
// compile with: /GR /EHsc
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

typedef char* charp;

class money
{
private:
    long value;
    static char *szCurrentPic;
public:
    money( long val ) { value = val; }
    friend ostream& operator << ( ostream& os, money m ) {
        // A more complete function would merge the picture
        // with the value rather than simply appending it
        os << m.value << '[' << money::szCurrentPic << ']';
        return os;
    }
    static void setpic( char* szPic ) {
        money::szCurrentPic = new char[strlen( szPic ) + 1];
        strcpy_s( money::szCurrentPic, strlen( szPic ) + 1, szPic );
    }
};

char *money::szCurrentPic;  // Static pointer to picture

void fb( ios_base& os, char * somename )
{
   money::setpic(somename);
/*
   ostream *pos = dynamic_cast<ostream*>(&os);
   if (pos)
   {
      for( int i=0; i < l; i++ )
      (*pos) << ' ';
   };
*/
}

_Smanip<charp>
   __cdecl setpic(char * somename)
   {
   return (_Smanip<charp>(&fb, somename));
   }

int main( )
{
    money amt = (long)35235.22;
    cout << setiosflags( ios::fixed );
    cout << setpic( "###,###,###.##" ) << "amount = " << amt << endl;
}
```

## <a name="see-also"></a>Vedere anche

[Manipolatori personalizzati con argomenti](../standard-library/custom-manipulators-with-arguments.md)
