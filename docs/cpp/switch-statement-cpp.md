---
title: Istruzione switch (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a5a8858d48a38d42dea7fba0fdce7c3a4d407a3a
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39462186"
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
 Il *espressione* deve essere di tipo integrale o di un tipo di classe per cui è disponibile una conversione non ambigua a tipo integrale. Promozione a intero viene eseguita come descritto in [conversioni Standard](standard-conversions.md).  
  
 Il **commutatore** corpo dell'istruzione è costituito da una serie di **case** etichette ed eventualmente **predefinito** etichetta. Nessuna due espressioni costanti nelle **caso** istruzioni possono restituire lo stesso valore. Il **predefinito** etichetta può comparire una sola volta. Le istruzioni con etichette non sono requisiti sintattici, ma il **commutatore** istruzione è inutile senza di essi.   L'istruzione default non deve necessariamente essere alla fine; può apparire in un punto qualsiasi del corpo dell'istruzione switch. Un'etichetta case o default può apparire solo all'interno di un'istruzione switch.  
  
 Il *espressione costante* in ogni **case** etichetta viene convertito nel tipo del *espressione* e confrontato con *espressione* per uguaglianza. Il controllo passa all'istruzione la cui proprietà **case** *espressione costante* corrisponde al valore di *espressione*. Il comportamento risultante è illustrato nella tabella seguente.  
  
### <a name="switch-statement-behavior"></a>Comportamento dell'istruzione switch  
  
|Condizione|Operazione|  
|---------------|------------|  
|Il valore convertito corrisponde a quello dell'espressione di controllo promossa.|Il controllo viene trasferito all'istruzione che segue tale etichetta.|  
|Nessuna costante corrisponde alle costanti nel **case** delle etichette; un **predefinita** è presente alcuna etichetta.|Per il controllo viene trasferito il **predefinito** etichetta.|  
|Nessuna costante corrisponde alle costanti nel **caso** etichette; **predefinito** etichetta non è presente.|Il controllo viene trasferito all'istruzione dopo il **commutatore** istruzione.|  
  
 Se viene trovata un'espressione corrispondente, controllo non viene impedito da successive **case** oppure **predefinita** etichette. Il [break](../cpp/break-statement-cpp.md) istruzione viene utilizzata per arrestare l'esecuzione e trasferire il controllo all'istruzione dopo le **passare** istruzione. Senza un **interruzione** , ogni istruzione corrispondente **case** etichetta alla fine del **switch**, tra cui la **predefinito**, è eseguito. Ad esempio:  
  
```cpp 
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
  
 Nell'esempio precedente `capa` viene incrementato se `c` è una `A` maiuscola. Il **break** istruzione dopo `capa++` termina l'esecuzione del **passare** corpo dell'istruzione e il controllo passa al **mentre** ciclo. Senza il **INTERR** istruzione, l'esecuzione sarebbe "passare" alla successiva istruzione con etichetta, in modo che `lettera` e `nota` potrebbe anche essere incrementato. Uno scopo simile viene servito dal **INTERR** istruzione per `case 'a'`. Se `c` è minuscolo `a`, `lettera` viene incrementata e il **interruzione** istruzione termina il **passare** corpo dell'istruzione. Se `c` non è un `a` oppure `A`, il **predefinita** viene eseguita un'istruzione.  

 **Visual Studio 2017 e versioni successiva:** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)) il `[[fallthrough]]` attributo è specificato in c++17 standard. Può essere utilizzato una **commutatore** istruzione come un suggerimento al compilatore (o a chiunque legga il codice) tale comportamento del FallThrough è previsto. Il compilatore Visual C++ attualmente non avvisa in caso di fallthrough comportamento, in modo che questo attributo non ha alcun effetto sul comportamento del compilatore. Si noti che l'attributo viene applicato a un'istruzione vuota all'interno dell'istruzione con etichetta; in altre parole il punto e virgola è necessario.

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

 **Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)): un'istruzione switch può introdurre e inizializzare una variabile il cui ambito è limitato al blocco dell'istruzione switch:

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

 Un blocco interno di un **commutatore** istruzione può contenere definizioni con inizializzazioni finché sono raggiungibili, vale a dire, non vengono ignorate da tutti i possibili percorsi di esecuzione. I nomi introdotti utilizzando queste dichiarazioni hanno ambito locale. Ad esempio:  
  
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
  
 Oggetto **commutatore** istruzione può essere nidificata. In questi casi **case** o **predefinito** associare etichette a quello più vicino **passare** istruzione che li racchiude.  

## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Microsoft C non limita il numero di valori di case in una **commutatore** istruzione. Tale numero è limitato solo dalla memoria disponibile. ANSI C richiede almeno 257 etichette case essere consentito in una **commutatore** istruzione.  
  
 Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate. Usare la [/Za](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore per disabilitare queste estensioni.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di selezione](../cpp/selection-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   