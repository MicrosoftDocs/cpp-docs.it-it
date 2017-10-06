---
title: Analisi degli argomenti della riga di comando C++ | Documenti Microsoft
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
- quotation marks, command-line arguments
- double quotation marks
- command line [C++], parsing
- parsing, command-line arguments
- startup code, parsing command-line arguments
ms.assetid: e634e733-ac2f-4298-abe2-7e9288c94951
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 5d3fbcd6b4e92d6e445d78a1b36efae319e472d7
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="parsing-c-command-line-arguments"></a>Analisi di argomenti della riga di comando C++
**Sezione specifica Microsoft**  
  
 Il codice di avvio C/C++ di Microsoft utilizza le regole seguenti quando interpreta gli argomenti forniti alla riga di comando del sistema operativo.  
  
-   Gli argomenti sono delimitati da spazi vuoti, ovvero da uno spazio o da una tabulazione.  
  
-   L'accento circonflesso (^) non viene riconosciuto come carattere di escape o delimitatore. Il carattere viene completamente gestito dal parser della riga di comando nel sistema operativo prima di essere passato alla matrice `argv` nel programma.  
  
-   Una stringa racchiusa tra virgolette doppie ("*stringa*") viene interpretato come un argomento singolo, indipendentemente dalla presenza di spazi all'interno. Una stringa tra virgolette può essere incorporata in un argomento.  
  
-   Le virgolette doppie precedute da una barra rovesciata (\\") vengono interpretate come carattere letterale virgolette doppie (").  
  
-   Le barre rovesciate vengono interpretate letteralmente, a meno che non precedano virgolette doppie.  
  
-   Se le virgolette doppie seguono un numero pari di barre rovesciate, per ciascuna coppia di barre rovesciate nella matrice `argv` viene inserita una barra rovesciata e le virgolette doppie vengono interpretate come un delimitatore di stringa.  
  
-   Se le virgolette doppie seguono un numero dispari di barre rovesciate, per ciascuna coppia di barre rovesciate nella matrice `argv` viene inserita una barra rovesciata e le virgolette doppie vengono ignorate dalla barra rovesciata rimanente, determinando l'aggiunta del carattere virgolette doppie (") in `argv`.  
  
## <a name="example"></a>Esempio  
 Nel programma seguente viene illustrato come vengono passati gli argomenti della riga di comando:  
  
```  
// command_line_arguments.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
int main( int argc,      // Number of strings in array argv  
          char *argv[],   // Array of command-line argument strings  
          char *envp[] )  // Array of environment variable strings  
{  
    int count;  
  
    // Display each command-line argument.  
    cout << "\nCommand-line arguments:\n";  
    for( count = 0; count < argc; count++ )  
         cout << "  argv[" << count << "]   "  
                << argv[count] << "\n";  
}  
```  
  
 La tabella seguente mostra input di esempio e output previsto, dimostrando le regole dell'elenco precedente.  
  
### <a name="results-of-parsing-command-lines"></a>Risultati dell'analisi delle righe di comando  
  
|Input della riga di comando|argv[1]|argv[2]|argv[3]|  
|-------------------------|---------------|---------------|---------------|  
|`"abc" d e`|`abc`|`d`|`e`|  
|`a\\b d"e f"g h`|`a\\b`|`de fg`|`h`|  
|`a\\\"b c d`|`a\"b`|`c`|`d`|  
|`a\\\\"b c" d e`|`a\\b c`|`d`|`e`|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
