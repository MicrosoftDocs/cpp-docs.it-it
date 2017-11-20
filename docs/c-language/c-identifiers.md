---
title: Identificatori C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- identifiers, C
- naming identifiers
- identifiers
- symbols, C identifiers
- identifiers, case sensitivity
- symbols, case sensitivity
ms.assetid: d02edbbc-85a0-4118-997b-84ee6b972eb6
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ab60d1275925504a746f8b6d01003129fd688673
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="c-identifiers"></a>Identificatori C
Gli "Identificatori" o i "simboli" sono i nomi forniti per variabili, tipi, funzioni ed etichette nel programma. I nomi degli identificatori devono essere diversi in ortografia e maiuscolo/minuscolo da tutte le parole chiave. Non è possibile utilizzare le parole chiave (C o Microsoft) come identificatori; sono riservate per un utilizzo speciale. Un identificatore viene creato specificandolo nella dichiarazione di una variabile, di un tipo o di una funzione. In questo esempio, `result` è un identificatore per una variabile intera e `main` e `printf` sono nomi degli identificatori per le funzioni.  
  
```  
#include <stdio.h>  
  
int main()  
{  
    int result;  
  
    if ( result != 0 )  
        printf_s( "Bad file handle\n" );  
}  
```  
  
 Una volta dichiarato, è possibile utilizzare l'identificatore nelle istruzioni di programma successive per fare riferimento al valore associato.  
  
 Un tipo speciale di identificatore, denominato etichetta istruzione, può essere utilizzato nelle istruzioni `goto`. Le dichiarazioni sono descritte in [Dichiarazioni e tipi](../c-language/declarations-and-types.md), le etichette istruzione sono descritte in [Istruzioni goto e con etichetta](../c-language/goto-and-labeled-statements-c.md).  
  
## <a name="syntax"></a>Sintassi  
 *identifier*:  
 *nondigit*  
  
 *identifier nondigit*  
  
 *identifier digit*  
  
 `nondigit`: uno tra  
 **_ a b c d e f g h i j k l m n o p q r s t u v w x y z**  
  
 **A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**  
  
 `digit`: uno tra  
 **0 1 2 3 4 5 6 7 8 9**  
  
 Il primo carattere del nome dell'identificatore deve essere `nondigit` ovvero il primo carattere deve essere un carattere di sottolineatura o una lettera maiuscola o minuscola. ANSI consente sei caratteri significativi in un nome dell'identificatore esterno e 31 per i nomi degli identificatori interni (all'interno di una funzione). Gli identificatori esterni (quelli dichiarati in ambito globale o dichiarati con classe di archiviazione `extern`) possono essere soggetti a restrizioni di denominazione aggiuntive in quanto tali identificatori devono essere elaborati da software diverso come i linker.  
  
 **Sezione specifica Microsoft**  
  
 Sebbene ANSI consenta 6 caratteri significativi nei nomi degli identificatori esterni e 31 per i nomi degli identificatori interni (all'interno di una funzione), il compilatore C di Microsoft consente 247 caratteri nel nome dell'identificatore interno o esterno. Se la compatibilità con ANSI non costituisce un problema, è possibile modificare questa impostazione predefinita a un numero più piccolo o più grande utilizzando l'opzione /H (che limita la lunghezza dei nomi esterni).  
  
 **Fine sezione specifica Microsoft**  
  
 Il compilatore C considera lettere maiuscole e minuscole come caratteri distinti. Questa funzionalità, denominata "distinzione maiuscole/minuscole", consente di creare identificatori distinti che hanno la stessa ortografia ma maiuscole/minuscole differenti per una o più lettere. Ad esempio, ognuno dei seguenti identificatori è univoco:  
  
```  
add  
ADD  
Add  
aDD  
```  
  
 **Sezione specifica Microsoft**  
  
 Non selezionare nomi di identificatori che iniziano con due caratteri di sottolineatura o con un carattere di sottolineatura seguito da una maiuscola. Lo standard ANSI C consente che i nomi degli identificatori che iniziano con queste combinazioni di caratteri siano riservati all'utilizzo del compilatore. Gli identificatori con ambito a livello di file non devono essere anche denominati con un carattere di sottolineatura e una minuscola come prime due lettere. Anche i nomi degli identificatori che iniziano con questi caratteri sono riservati. Per convenzione, Microsoft utilizza un carattere di sottolineatura e una lettera maiuscola per avviare nomi macro e un doppio carattere di sottolineatura per nomi di parola chiave specifici di Microsoft. Per evitare eventuali conflitti di denominazione, selezionare sempre nomi dell'identificatore che non iniziano con uno o due caratteri di sottolineatura o nomi che iniziano con un carattere di sottolineatura seguito da una maiuscola.  
  
 **Fine sezione specifica Microsoft**  
  
 Di seguito sono riportati alcuni esempi di identificatori validi conformi alle limitazioni di denominazione specifiche di ANSI o Microsoft:  
  
```  
j  
count  
temp1  
top_of_page  
skip12  
LastNum  
```  
  
 **Sezione specifica Microsoft**  
  
 Sebbene gli identificatori in file di origine prevedano la distinzione tra maiuscole e minuscole per impostazione predefinita, i simboli nei file oggetto non la prevedono. Microsoft C esegue la distinzione tra maiuscole e minuscole per gli identificatori all'interno di un'unità di compilazione.  
  
 Per il linker di Microsoft viene applicata la distinzione tra maiuscole e minuscole. È necessario specificare tutti gli identificatori in modo coerente in base alla maiuscola/minuscola.  
  
 Il "set di caratteri di origine" è il set di caratteri validi che possono essere visualizzati in file di origine. Per Microsoft C, il set di origine è il set di caratteri ASCII standard. Il set di caratteri di origine e il set di caratteri di esecuzione includono i caratteri ASCII utilizzati come sequenze di escape. Per informazioni sul set di caratteri di esecuzione, vedere [Costanti carattere C](../c-language/c-character-constants.md).  
  
 **Fine sezione specifica Microsoft**  
  
 Un identificatore ha un "ambito", che rappresenta l'area del programma in cui è noto, e un "collegamento", che determina se lo stesso nome in un altro ambito si riferisce allo stesso identificatore. Questi argomenti sono descritti in [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi di C](../c-language/elements-of-c.md)