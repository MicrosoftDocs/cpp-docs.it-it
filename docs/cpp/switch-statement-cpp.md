---
title: Istruzione switch (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- default_cpp
- switch_cpp
- case_cpp
dev_langs:
- C++
helpviewer_keywords:
- switch keyword [C++]
- case keyword [C++], in switch statements
- default keyword [C++]
ms.assetid: 6c3f3ed3-5593-463c-8f4b-b33742b455c6
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 5e05299d88cadfafb9ccb7523aac33096b90d46b
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="switch-statement-c"></a>Istruzione switch (C++)
Consente la selezione tra più sezioni di codice, in base al valore di un'espressione integrale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
   switch ( init; expression )  
   case constant-expression : statement  
   [default  : statement]  
```  
  
## <a name="remarks"></a>Note  
 Il *espressione* deve essere di tipo integrale o di un tipo di classe per cui è disponibile una conversione non ambigua a tipo integrale. La promozione a intero viene eseguita come descritto in [conversioni Standard](standard-conversions.md).  
  
 Il `switch` corpo dell'istruzione è costituito da una serie di **case** etichette ed eventualmente **predefinito** etichetta. Nessun due espressioni costanti nelle **case** istruzioni possono restituire lo stesso valore. Il **predefinito** etichetta può comparire una sola volta. Le istruzioni con etichette non sono requisiti sintattici, ma l'istruzione `switch` è inutile senza di essi.   L'istruzione default non deve necessariamente essere alla fine; può apparire in un punto qualsiasi del corpo dell'istruzione switch. Un'etichetta case o default può apparire solo all'interno di un'istruzione switch.  
  
 Il *espressione costante* in ogni **case** etichetta viene convertita nel tipo di *espressione* e confrontato con *espressione* per uguaglianza. Il controllo passa all'istruzione la cui proprietà **case** *espressione costante* corrisponde al valore di *espressione*. Il comportamento risultante è illustrato nella tabella seguente.  
  
### <a name="switch-statement-behavior"></a>Comportamento dell'istruzione switch  
  
|Condizione|Operazione|  
|---------------|------------|  
|Il valore convertito corrisponde a quello dell'espressione di controllo promossa.|Il controllo viene trasferito all'istruzione che segue tale etichetta.|  
|Nessuna costante corrisponde alle costanti nel **case** etichette; un **predefinito** è presente alcuna etichetta.|Per il controllo viene trasferito il **predefinito** etichetta.|  
|Nessuna costante corrisponde alle costanti nel **case** etichette; **predefinito** etichetta non è presente.|Il controllo viene trasferito all'istruzione che segue l'istruzione `switch`.|  
  
 Se viene trovata un'espressione corrispondente, controllo non viene impedito da successive **case** o **predefinito** etichette. Il [interruzione](../cpp/break-statement-cpp.md) istruzione viene utilizzata per arrestare l'esecuzione e trasferire il controllo all'istruzione dopo il `switch` istruzione. Senza un **interruzione** , ogni istruzione corrispondente **case** etichetta alla fine del `switch`, tra cui la **predefinito**, viene eseguita. Ad esempio:  
  
```  
// switch_statement1.cpp  
#include <stdio.h>  
  
int main() {  
   char *buffer = "Any character stream";  
   int capa, lettera, nota;  
   char c;  
   capa = lettera = nota = 0;  
  
   while ( c = *buffer++ )   // Walks buffer until NULL  
   {  
      switch ( c )  
      {  
         case 'A':  
            capa++;  
            break;  
         case 'a':  
            lettera++;  
            break;  
         default:  
            nota++;  
      }  
   }  
   printf_s( "\nUppercase a: %d\nLowercase a: %d\nTotal: %d\n",  
      capa, lettera, (capa + lettera + nota) );  
}  
```  
  
 Nell'esempio precedente `capa` viene incrementato se `c` è una `A` maiuscola. L'istruzione `break` dopo `capa++` termina l'esecuzione del corpo dell'istruzione `switch` e il controllo passa al ciclo `while`. Senza il `break` istruzione esecuzione sarebbe "passaggio" alla successiva istruzione con etichetta, in modo che `lettera` e `nota` potrebbe anche essere incrementato. Uno scopo simile viene utilizzato dall'istruzione `break` per `case 'a'`. Se `c` è una `a` minuscola, `lettera` viene incrementata e l'istruzione `break` termina il corpo dell'istruzione `switch`. Se `c` non è `a` o `A`, l'istruzione `default` viene eseguita.  

 **Visual Studio 2017 e versioni successiva:** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)) il `[[fallthrough]]` attributo viene specificato il 17 C++ standard. E può essere utilizzato un `switch` istruzione come un suggerimento al compilatore (o a chiunque legga il codice) è destinato questo comportamento del passaggio. Il compilatore Visual C++ attualmente non avvisa in caso di fallthrough comportamento, in modo da questo attributo non è il comportamento del compilatore alcun effetto. Si noti che l'attributo viene applicato a un'istruzione vuota all'interno dell'istruzione con etichetta; in altre parole il punto e virgola è necessario.

```cpp
int main()
{
    int n = 5;
    switch (n)
    {

    case 1:
        a();
        break;
    case 2:
        b();
        d();
        [[fallthrough]]; // I meant to do this!
    case 3:
        c();
        break;
    default:
        d();
        break;
    }

    return 0;
}
```

 **Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): un'istruzione switch può introdurre e inizializzare una variabile il cui ambito è limitato al blocco dell'istruzione switch:

```cpp
 switch (Gadget gadget(args); auto s = gadget.get_status())
        {
        case status::good:
            gadget.zip();
            break;
        case status::bad:
            throw BadGadget();
        };
```

 Un blocco interno di un'istruzione `switch` può contenere definizioni con inizializzazioni finché sono raggiungibili, ovvero non vengono ignorate da tutti i possibili percorsi di esecuzione. I nomi introdotti utilizzando queste dichiarazioni hanno ambito locale. Ad esempio:  
  
```cpp  
// switch_statement2.cpp  
// C2360 expected  
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[])  
{  
   switch( tolower( *argv[1] ) )  
   {  
       // Error. Unreachable declaration.  
       char szChEntered[] = "Character entered was: ";  
  
   case 'a' :  
       {  
       // Declaration of szChEntered OK. Local scope.  
       char szChEntered[] = "Character entered was: ";  
       cout << szChEntered << "a\n";  
       }  
       break;  
  
   case 'b' :  
       // Value of szChEntered undefined.  
       cout << szChEntered << "b\n";  
       break;  
  
   default:  
       // Value of szChEntered undefined.  
       cout << szChEntered << "neither a nor b\n";  
       break;  
   }  
}  
```  
  
 Un'istruzione `switch` può essere annidata. In questi casi, **case** o **predefinito** etichette associare più vicina `switch` istruzione che li racchiude.  

 
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Microsoft C non limita il numero di valori di etichette case che possono essere presenti in un'istruzione `switch`. Tale numero è limitato solo dalla memoria disponibile. ANSI C richiede che in un'istruzione `switch` siano consentite almeno 257 etichette case.  
  
 Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate. Utilizzare il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore per disabilitare queste estensioni.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di selezione](../cpp/selection-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 
