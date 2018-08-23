---
title: Errore irreversibile C1510 | Microsoft Docs
ms.custom: ''
ms.date: 04/11/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1510
dev_langs:
- C++
helpviewer_keywords:
- C1510
ms.assetid: 150c827f-9514-41a9-8d7e-82f820749bcb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 25b1c3f83b770dc7b346e83e9675afe423af2516
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42539456"
---
# <a name="fatal-error-c1510"></a>Errore irreversibile C1510
Impossibile aprire il file clui.dll della risorsa di lingua  
  
 Il compilatore non è possibile caricare la DLL di risorse di lingua.  
  
Esistono due cause più comuni per risolvere questo problema. Quando si usano gli strumenti e compilatore a 32 bit, si potrebbe essere visualizzato questo errore per i progetti di grandi dimensioni che utilizzano più di 2GB di memoria durante un collegamento. Una soluzione possibile nei sistemi Windows a 64 bit consiste nell'usare l'oggetto nativo a 64 bit o attacchi di compilatore e strumenti per la generazione del codice. Ciò consente di sfruttare lo spazio più ampio di memoria disponibile per le app a 64 bit. Se è necessario usare un compilatore a 32 bit perché in esecuzione in un sistema a 32 bit, in alcuni casi è possibile aumentare la quantità di memoria disponibile per il linker a 3GB. Per altre informazioni, vedere [Tuning 4 Gigabyte: Boot. ini e BCDEdit](https://msdn.microsoft.com/library/vs/alm/bb613473\(v=vs.85\).aspx) e il [BCDEdit /set increaseuserva](https://msdn.microsoft.com/library/ff542202.aspx) comando.  

L'altra causa comune è un'installazione di Visual Studio interrotta o incompleta. In questo caso, eseguire il programma di installazione per ripristinare o reinstallare Visual Studio.  
  