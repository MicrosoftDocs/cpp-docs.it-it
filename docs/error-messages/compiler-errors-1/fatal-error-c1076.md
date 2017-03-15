---
title: "Errore irreversibile C1076 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1076"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1076"
ms.assetid: 84ac1180-3e8a-48e8-9f77-7f18a778b964
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore irreversibile C1076
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: raggiunto limite interno dell'heap. Utilizzare \/Zm per specificare un limite maggiore  
  
 Questo errore può essere causato da un numero eccessivo di simboli o di creazioni di istanza di modello.  
  
 Per correggere l'errore, effettuare le seguenti operazioni:  
  
1.  Utilizzare l'opzione [\/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) per impostare il limite di memoria del compilatore sul valore specificato nel messaggio di errore [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md).  Per ulteriori informazioni su come impostare questo valore in [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)], vedere la sezione Osservazioni in [\/Zm \(Specifica il limite di allocazione della memoria per le intestazioni precompilate\)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).  
  
2.  Se si utilizzano i compilatori ospitati a 32 bit in un sistema operativo a 64 bit, utilizzare i compilatori ospitati a 64 bit.  Per ulteriori informazioni, vedere [Procedura: abilitare un set di strumenti Visual C\+\+ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).  
  
3.  Eliminare i file di inclusione non necessari.  
  
4.  Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.  
  
5.  Eliminare le dichiarazioni inutilizzate.  
  
6.  Suddividere le funzioni di grandi dimensioni in funzioni più piccole.  
  
7.  Suddividere le classi di grandi dimensioni in classi più piccole.  
  
8.  Suddividere il file corrente in file più piccoli.  
  
 Se l'errore C1076 si verifica subito dopo l'avvio della compilazione, è probabile che il valore specificato per **\/Zm** sia troppo elevato per il programma.  Ridurre il valore di **\/Zm**.