---
title: "Regole relative alle istruzioni di definizione dei moduli | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".def"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file di definizione moduli"
  - "file di definizione moduli, sintassi delle istruzioni"
ms.assetid: f65cd3a7-65d7-4d06-939f-a8b1ecd50f2d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Regole relative alle istruzioni di definizione dei moduli
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le regole di sintassi riportate di seguito sono applicabili a tutte le istruzioni contenute in un file DEF.  Altre regole relative a istruzioni specifiche sono descritte nelle singole istruzioni.  
  
-   Per le istruzioni, le parole chiave di attributo e gli identificatori specificati dall'utente viene rilevata la distinzione tra maiuscole e minuscole.  
  
-   I nomi file lunghi contenenti spazi o punti e virgola \(;\) devono essere racchiusi tra virgolette \("\).  
  
-   Utilizzare uno o più spazi, tabulazioni o caratteri di nuova riga per separare una parola chiave dell'istruzione dai corrispondenti argomenti e per separare le istruzioni l'una dall'altra.  Il segno di uguale \(\=\) o i due punti \(:\) che indicano un argomento sono racchiusi tra zero o più spazi, tabulazioni o caratteri di nuova riga.  
  
-   Un'istruzione **NAME** o **LIBRARY**, se utilizzata, deve precedere tutte le altre istruzioni.  
  
-   Le istruzioni **SECTIONS** ed **EXPORTS** possono essere visualizzate più volte in un file DEF.  Ciascuna istruzione può presentare più specifiche, che devono essere separate da uno o più spazi, tabulazioni o caratteri di nuova riga.  La parola chiave dell'istruzione deve essere inserita una volta prima della prima specifica e può quindi essere ripetuta prima di ciascuna ulteriore specifica.  
  
-   Diverse istruzioni dispongono di un'opzione della riga di comando di LINK equivalente.  Per ulteriori informazioni, vedere la descrizione della corrispondente opzione di LINK.  
  
-   I commenti nei file DEF sono contrassegnati da un punto e virgola \(;\) all'inizio di ciascuna riga di commento.  Un commento non può essere presente sulla stessa riga di un'istruzione, ma può essere inserito tra le specifiche di un'istruzione su più righe, ad esempio **SECTIONS** ed **EXPORTS**.  
  
-   Gli argomenti numerici sono specificati in formato decimale o esadecimale.  
  
-   Se un argomento stringa è identico a una [parola riservata](../../build/reference/reserved-words.md), deve essere racchiuso tra virgolette doppie \("\).  
  
## Vedere anche  
 [File di definizione moduli \(DEF\)](../../build/reference/module-definition-dot-def-files.md)   
 [Frequently Asked Questions on Building](http://msdn.microsoft.com/it-it/56a3bb8f-0181-4989-bab4-a07ba950ab08)