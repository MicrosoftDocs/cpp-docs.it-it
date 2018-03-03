---
title: Nomi senza alcun collegamento | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- functions [C++], parameters
- typedef names, linkage
- enumerators [C++], linkage
- names [C++], with no linkage
- function parameters [C++]
ms.assetid: 7174c500-12d2-4572-8c16-63c27c758fb1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 13acb94022caf7ad9ddbf2fe94ad2fa95a70dc80
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="names-with-no-linkage"></a>Nomi senza alcun collegamento
Gli unici nomi senza collegamento sono:  
  
-   Parametri di funzione.  
  
-   I nomi con ambito blocco non dichiarati come `extern` o **statico**.  
  
-   Enumeratori.  
  
-   Nomi dichiarati in un'istruzione `typedef`. Si verifica un'eccezione quando l'istruzione `typedef` viene usata per assegnare un nome per un tipo di classe senza nome. Il nome può quindi disporre di collegamento esterno se la classe dispone di collegamento esterno. Nell'esempio seguente viene illustrata una situazione in cui un nome `typedef` dispone di collegamento esterno:  
  
    ```  
    // names_with_no_linkage.cpp  
    typedef struct  
    {  
       short x;  
       short y;  
    } POINT;  
  
    extern int MoveTo( POINT pt );  
  
    int main()  
    {  
    }  
    ```  
  
     Il nome `typedef`, `POINT` diventa il nome della classe per la struttura senza nome. Viene quindi usato per dichiarare una funzione con collegamento esterno.  
  
 Poiché i nomi `typedef` non dispongono di collegamento, le relative definizioni possono variare in base alle unità di conversione. Poiché le compilazioni vengono eseguite in modo discreto, il compilatore non è in gradi di rilevare tali differenze. Di conseguenza, gli errori di questo tipo non vengono rilevati fino alla fase di collegamento. Si consideri il caso seguente:  
  
```  
// Translation unit 1  
typedef int INT  
  
INT myInt;  
...  
  
// Translation unit 2  
typedef short INT  
  
extern INT myInt;  
...  
```  
  
 Il codice precedente genera un errore 'errore non risolto' in fase di collegamento.  
  
## <a name="example"></a>Esempio  
 Le funzioni C++ possono essere definite solo nell'ambito del file o della classe. Nell'esempio seguente viene illustrato come definire le funzioni e viene illustrata una definizione di funzione errata:  
  
```  
// function_definitions.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
void ShowChar( char ch );    // Declare function ShowChar.  
  
void ShowChar( char ch )     // Define function ShowChar.  
{                            // Function has file scope.  
   cout << ch;  
}  
  
struct Char                  // Define class Char.  
{  
    char Show();             // Declare Show function.  
    char Get();              // Declare Get function.  
    char ch;  
};  
  
char Char::Show()            // Define Show function  
{                            //  with class scope.  
    cout << ch;  
    return ch;  
}  
  
void GoodFuncDef( char ch )  // Define GoodFuncDef  
{                            //  with file scope.  
    int BadFuncDef( int i )  // C2601, Erroneous attempt to  
    {                        //  nest functions.  
        return i * 7;  
    }  
    for( int i = 0; i < BadFuncDef( 2 ); ++i )  
        cout << ch;  
    cout << "\n";  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Programma e collegamento](../cpp/program-and-linkage-cpp.md)