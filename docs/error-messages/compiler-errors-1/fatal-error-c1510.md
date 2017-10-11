---
title: Errore irreversibile C1510 | Documenti Microsoft
ms.custom: 
ms.date: 04/11/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1510
dev_langs:
- C++
helpviewer_keywords:
- C1510
ms.assetid: 150c827f-9514-41a9-8d7e-82f820749bcb
caps.latest.revision: 1
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 373cd74b1649fb9c1bd87cad1903df183f153c0f
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="fatal-error-c1510"></a>Errore irreversibile C1510
Impossibile aprire il file clui.dll della risorsa di lingua  
  
 Il compilatore non è possibile caricare la DLL di risorse di lingua.  
  
Esistono due cause più comuni per questo problema. Quando si utilizza il compilatore a 32 bit e gli strumenti, si verifichi questo errore per i progetti di grandi dimensioni che utilizzano più di 2GB di memoria durante un collegamento. Una possibile soluzione nei sistemi Windows a 64 bit è utilizzare nativo a 64 bit o cross compilatore e strumenti per la generazione del codice. Ciò consente di sfruttare il maggiore spazio di memoria disponibile per applicazioni a 64 bit. Se è necessario utilizzare un compilatore a 32 bit perché sono in esecuzione in un sistema a 32 bit, in alcuni casi è possibile aumentare la quantità di memoria disponibile per il linker a 3GB. Per ulteriori informazioni, vedere [ottimizzazione 4 Gigabyte: BCDEdit e Boot.ini](https://msdn.microsoft.com/library/vs/alm/bb613473(v=vs.85).aspx) e [BCDEdit /set increaseuserva](https://msdn.microsoft.com/library/ff542202.aspx) comando.  

L'altra causa comune è un'installazione di Visual Studio interrotta o incompleta. In questo caso, eseguire il programma di installazione per ripristinare o reinstallare Visual Studio.  
  
