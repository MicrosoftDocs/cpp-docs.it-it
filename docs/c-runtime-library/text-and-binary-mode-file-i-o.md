---
title: "I/O file modalità testo e binaria | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.io
dev_langs:
- C++
helpviewer_keywords:
- files [C++], open functions
- I/O [CRT], text files
- functions [CRT], file access
- binary access, binary mode file I/O
- translation, modes
- I/O [CRT], binary
- text files, I/O
- I/O [CRT], translation modes
- translation modes (file I/O)
- binary access
ms.assetid: 3196e321-8b87-4609-b302-cd6f3c516051
caps.latest.revision: 10
author: corob-msft
ms.author: corob
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
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: a788242344c7cb3b89765e7476fdd23dbf68982d
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="text-and-binary-mode-file-io"></a>I/O file modalità testo e binaria
Le operazioni di I/O del file vengono eseguite in una delle due modalità di conversione, di testo o binaria, in base alla modalità in cui il file è aperto. I file di dati in genere vengono elaborati in modalità testo. Per controllare la modalità di conversione del file, è possibile:  
  
-   Mantenere il valore predefinito corrente e specificare la modalità alternativa solo quando i file selezionati vengono aperti.  
  
-   Usare la funzione [_set_fmode](../c-runtime-library/reference/set-fmode.md) per modificare la modalità predefinita per i file aperti di recente. Usare [_get_fmode](../c-runtime-library/reference/get-fmode.md) per individuare la modalità predefinita corrente. L'impostazione predefinita iniziale è la modalità di testo (`_O_TEXT`).  
  
-   Modificare la modalità di conversione predefinita direttamente impostando la variabile globale [_fmode](../c-runtime-library/fmode.md) nel programma. La funzione `_set_fmode` imposta il valore della variabile, ma può anche essere impostata direttamente.  
  
 Quando si chiama una funzione di apertura file come [_open](../c-runtime-library/reference/open-wopen.md), [fopen](../c-runtime-library/reference/fopen-wfopen.md), [fopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md), [freopen](../c-runtime-library/reference/freopen-wfreopen.md), [freopen_s](../c-runtime-library/reference/freopen-s-wfreopen-s.md), [_fsopen](../c-runtime-library/reference/fsopen-wfsopen.md) o [_sopen_s](../c-runtime-library/reference/sopen-s-wsopen-s.md), è possibile eseguire l'override dell'impostazione predefinita corrente di `_fmode` specificando l'argomento appropriato per la funzione [_set_fmode](../c-runtime-library/reference/set-fmode.md). I flussi `stdin`, `stdout` e `stderr` vengono sempre aperti in modalità testo per impostazione predefinita; è inoltre possibile eseguire l'override di questa impostazione predefinita quando si apre uno di questi file. Usare [_setmode](../c-runtime-library/reference/setmode.md) per modificare la modalità di conversione tramite il descrittore del file dopo che il file è stato aperto.  
  
## <a name="see-also"></a>Vedere anche  
 [Input e output](../c-runtime-library/input-and-output.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
