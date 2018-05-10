---
title: hdrstop | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- hdrstop_CPP
- vc-pragma.hdrstop
dev_langs:
- C++
helpviewer_keywords:
- hdrstop pragma
- pragmas, hdrstop
ms.assetid: 5ea8370a-10d1-4538-ade6-4c841185da0e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f1c628efaf45be87dcfc046cf1774c762c157f4f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="hdrstop"></a>hdrstop
Offre controllo aggiuntivo sui nomi file di precompilazione e sulla posizione in cui lo stato di compilazione viene salvato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma hdrstop [( "filename" )]    
```  
  
## <a name="remarks"></a>Note  
 Il *filename* è il nome del file di intestazione precompilata da utilizzare o creare (a seconda che [/Yu](../build/reference/yu-use-precompiled-header-file.md) o [/Yc](../build/reference/yc-create-precompiled-header-file.md) è specificato). Se *filename* non contiene una specifica del percorso, si presuppone che il file di intestazione precompilata per essere nella stessa directory del file di origine.  
  
 Se un file C o C++ contiene una **hdrstop** pragma quando viene compilato con /Yc, il compilatore Salva lo stato della compilazione nella posizione del pragma. Lo stato compilato di eventuale codice che segue il pragma non viene salvato.  
  
 Utilizzare *filename* per denominare il file di intestazione precompilata in cui viene salvato lo stato compilato. Uno spazio tra **hdrstop** e *filename* è facoltativo. Il nome del file specificato nella **hdrstop** pragma è una stringa e pertanto è soggetto ai vincoli di qualsiasi stringa C o C++. In particolare, deve essere racchiuso tra virgolette e utilizzare il carattere di escape (barra rovesciata) per specificare i nomi di directory. Ad esempio:  
  
```  
#pragma hdrstop( "c:\\projects\\include\\myinc.pch" )  
```  
  
 Il nome del file di intestazione precompilato viene determinato in base agli elementi seguenti (in ordine di priorità):  
  
1.  L'argomento dell'opzione del compilatore /Fp  
  
2.  Il *filename* argomento #**pragma hdrstop**  
  
3.  Il nome di base del file di origine con una estensione PCH  
  
 Per le opzioni /Yc e /Yu, se le opzioni di due compilazione né la **hdrstop** pragma specifica un nome file, il nome base del file di origine viene utilizzato come nome di base del file di intestazione precompilata.  
  
 È inoltre possibile utilizzare i comandi di pre-elaborazione per eseguire la sostituzione delle macro come indicato di seguito:  
  
```  
#define INCLUDE_PATH "c:\\progra~`1\\devstsu~1\\vc\\include\\"  
#define PCH_FNAME "PROG.PCH"  
.  
.  
.  
#pragma hdrstop( INCLUDE_PATH PCH_FNAME )  
```  
  
 Le regole seguenti determinano dove il **hdrstop** pragma può essere inserito:  
  
-   Deve trovarsi all'esterno di eventuali dati o dichiarazione o definizione di funzione.  
  
-   Deve essere specificato nel file di origine, non all'interno di un file di intestazione.  
  
## <a name="example"></a>Esempio  
  
```  
#include <windows.h>                 // Include several files  
#include "myhdr.h"  
  
__inline Disp( char *szToDisplay )   // Define an inline function  
{  
    ...                              // Some code to display string  
}  
#pragma hdrstop  
```  
  
 In questo esempio, il **hdrstop** pragma viene visualizzato dopo due file sono stati inclusi ed è stata definita una funzione inline. Questa potrebbe a prima vista sembrare una posizione inconsueta per il pragma. Considerare, tuttavia, che l'utilizzo di opzioni di precompilazione manuali, /Yc e /Yu, con la **hdrstop** pragma consente di precompilare interi file di origine, anche il codice inline. Il compilatore Microsoft non limita l'utente alla precompilazione delle sole dichiarazioni di dati.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)