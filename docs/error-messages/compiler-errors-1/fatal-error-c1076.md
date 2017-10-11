---
title: Errore irreversibile C1076 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1076
dev_langs:
- C++
helpviewer_keywords:
- C1076
ms.assetid: 84ac1180-3e8a-48e8-9f77-7f18a778b964
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 2e912cc4910ab1362719d94f374f145e90747e69
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="fatal-error-c1076"></a>Errore irreversibile C1076
limite del compilatore: raggiunto limite interno dell'heap. Utilizzare /Zm per specificare un limite maggiore  
  
 Questo errore può essere causato da un numero eccessivo di simboli o di creazioni di istanza di modello.  
  
 Per correggere l'errore, effettuare le seguenti operazioni:  
  
1.  Utilizzare il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione per impostare il limite di memoria del compilatore sul valore specificato nel [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) messaggio di errore. Per altre informazioni che include come impostare questo valore in [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)], vedere la sezione Osservazioni in [/Zm (specifica memoria allocazione limite di intestazioni precompilate)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).  
  
2.  Se si utilizzano i compilatori ospitati a 32 bit in un sistema operativo a 64 bit, utilizzare i compilatori ospitati a 64 bit. Per ulteriori informazioni, vedere [procedura: abilitare un 64-Bit Visual C++ set di strumenti della riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).  
  
3.  Eliminare i file di inclusione non necessari.  
  
4.  Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.  
  
5.  Eliminare le dichiarazioni inutilizzate.  
  
6.  Suddividere le funzioni di grandi dimensioni in funzioni più piccole.  
  
7.  Suddividere le classi di grandi dimensioni in classi più piccole.  
  
8.  Suddividere il file corrente in file più piccoli.  
  
 Se l'errore C1076 si verifica immediatamente dopo l'avvio della compilazione, il valore specificato per **/Zm** è probabilmente troppo elevato per il programma. Ridurre il **/Zm** valore.
