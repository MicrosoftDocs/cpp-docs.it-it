---
title: Identificatori di classi di archiviazione per dichiarazioni di livello esterno | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- external definitions
- linkage [C++], external
- external linkage, variable declarations
- declaring variables, external variables
- declarations [C++], external
- declarations [C++], specifiers
- external declarations
- static variables, external declarations
- variables, visibility
- external linkage, storage-class specifiers
- referencing declarations
- visibility, variables
- static storage class specifiers
ms.assetid: b76b623a-80ec-4d5d-859b-6cef422657ee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cfdae4791b89ffd78661a983fdc8c1beec77edea
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32392117"
---
# <a name="storage-class-specifiers-for-external-level-declarations"></a>Identificatori di classi di archiviazione per dichiarazioni di livello esterno
Le variabili esterne sono variabili nell'ambito file. Sono definite all'esterno di qualsiasi funzione e sono potenzialmente disponibili in molte funzioni. Le funzioni possono essere definite solo a livello esterno e, pertanto, non possono essere annidate. Per impostazione predefinita, tutti i riferimenti a variabili esterne e funzioni con lo stesso nome sono riferimenti allo stesso oggetto, ovvero presentano un "collegamento esterno". È possibile usare la parola chiave **static** per eseguire l'override di questa operazione. Per altre informazioni su **static**, vedere le informazioni più avanti in questa sezione.  
  
 Le dichiarazioni di variabile a livello esterno sono definizioni delle variabili ("dichiarazioni di definizione") o riferimenti a variabili definite altrove ("dichiarazioni di riferimento").  
  
 Una dichiarazione di variabile esterna che inizializza anche la variabile (in modo implicito o esplicito) è una dichiarazione di definizione di variabile. Una definizione a livello esterno può assumere varie forme:  
  
-   Una variabile dichiarata con l'identificatore classe di archiviazione **static**. È possibile inizializzare in modo esplicito la variabile **static** con un'espressione costante, come descritto in [Inizializzazione](../c-language/initialization.md). Se si omette l'inizializzatore, la variabile viene inizializzata a 0 per impostazione predefinita. Ad esempio, le due istruzioni sono entrambe considerate definizioni della variabile `k`.  
  
    ```  
    static int k = 16;  
    static int k;  
    ```  
  
-   Una variabile che in modo esplicito viene inizializzata a livello esterno. Ad esempio, `int j = 3;` è una definizione della variabile `j`.  
  
 Nelle dichiarazioni delle variabili a livello esterno (ovvero al di fuori di tutte le funzioni) è possibile usare l'identificatore classe di archiviazione **static** o `extern` oppure omettere completamente l'identificatore classe di archiviazione. Non è possibile usare i terminali *storage-class-specifier* **auto** e **register** a livello esterno.  
  
 Una volta che una variabile è definita a livello esterno, è visibile in tutto il resto dell'unità di conversione. La variabile non è visibile prima della dichiarazione nello stesso file di origine. Inoltre, non è visibile in altri file di origine del programma, a meno che una dichiarazione di riferimento non lo renda visibile, come descritto di seguito.  
  
 Le regole relative a **static** includono:  
  
-   Le variabili dichiarate all'esterno di tutti i blocchi senza la parola chiave **static** mantengono sempre i propri valori in tutto il programma. Per limitare tale accesso a un'unità di conversione particolare, è necessario usare la parola chiave **static**. In tal modo gli viene fornito un "collegamento interno". Per renderli globali nell'intero programma, omettere la classe di archiviazione esplicita o utilizzare la parola chiave `extern` (vedere le regole nell'elenco seguente). In tal modo gli viene fornito un "collegamento esterno". I collegamenti interni ed esterni vengono illustrati anche in [Collegamento](../c-language/linkage.md).  
  
-   È possibile definire una variabile a livello esterno una sola volta all'interno di un programma. È possibile definire un'altra variabile con lo stesso nome e l'identificatore classe di archiviazione **static** in un'unità di conversione diversa. Poiché ogni definizione **static** è visibile solo all'interno della relativa unità di conversione, non si verifica alcun conflitto. In tal modo si fornisce una modalità utile per nascondere i nomi degli identificatori che devono essere condivisi tra funzioni di una singola unità di conversione, ma non devono essere visibili alle altre unità di conversione.  
  
-   L'identificatore classe di archiviazione **static** può essere applicato anche alle funzioni. Se si dichiara una funzione **static**, il nome è invisibile all'esterno del file in cui è dichiarata.  
  
 Le regole per l'utilizzo `extern` sono:  
  
-   L'identificatore classe di archiviazione `extern` dichiara un riferimento a una variabile definita altrove. È possibile utilizzare una dichiarazione `extern` per rendere visibile una definizione in un altro file di origine oppure per rendere visibile una variabile prima della definizione nello stesso file di origine. Dopo aver dichiarato un riferimento alla variabile a livello esterno, la variabile è visibile in tutto il resto dell'unità di conversione in cui il riferimento viene dichiarato.  
  
-   Affinché un riferimento `extern` sia valido, la variabile cui si riferisce deve essere definita una e una sola volta a livello esterno. Questa definizione (senza la classe di archiviazione `extern`) può trovarsi in qualsiasi unità di conversione che costituisce il programma.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito vengono illustrate le dichiarazioni esterne:  
  
```  
/******************************************************************  
                      SOURCE FILE ONE   
*******************************************************************/  
#include <stdio.h>  
  
extern int i;                // Reference to i, defined below   
void next( void );           // Function prototype              
  
int main()  
{  
    i++;  
    printf_s( "%d\n", i );   // i equals 4   
    next();  
}  
  
int i = 3;                  // Definition of i  
  
void next( void )  
{  
    i++;  
    printf_s( "%d\n", i );  // i equals 5  
    other();  
}  
  
/******************************************************************  
                      SOURCE FILE TWO   
*******************************************************************/  
#include <stdio.h>  
  
extern int i;              // Reference to i in   
                           // first source file   
void other( void )  
{  
    i++;  
    printf_s( "%d\n", i ); // i equals 6   
}  
```  
  
 Nei due file di origine in questo esempio sono contenute in totale tre dichiarazioni esterne `i`. Una sola dichiarazione è una "dichiarazione di definizione". La dichiarazione,  
  
```  
int i = 3;  
```  
  
 definisce la variabile globale `i` e la inizializza con valore iniziale 3. La dichiarazione "di riferimento" `i` all'inizio del primo file di origine che utilizza `extern` rende visibile la variabile globale prima della relativa dichiarazione di definizione nel file. La dichiarazione di riferimento `i` nel secondo file di origine rende visibile anche la variabile nel file di origine. Se un'istanza di definizione per una variabile non è disponibile nell'unità di conversione, il compilatore presuppone la presenza  
  
```  
extern int x;  
```  
  
 di una dichiarazione di riferimento e che un riferimento di definizione  
  
```  
int x = 0;  
```  
  
 viene visualizzato in un'altra unità di conversione del programma.  
  
 Tutte e tre le funzioni, `main`, `next` e `other`, eseguono la stessa attività: aumentano `i` e lo visualizzano. Vengono visualizzati i valori 4, 5 e 6.  
  
 Se la variabile `i` non fosse stata inizializzata, sarebbe stata impostata automaticamente su 0. In questo caso, sarebbero stati visualizzati i valori 1, 2 e 3. Per informazioni sull'inizializzazione delle variabili, vedere [Inizializzazione](../c-language/initialization.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di archiviazione C](../c-language/c-storage-classes.md)