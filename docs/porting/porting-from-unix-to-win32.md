---
title: Esecuzione di programmi Linux in Windows
ms.date: 07/31/2019
helpviewer_keywords:
- Linux [C++], porting to Win32
ms.assetid: 3837e4fe-3f96-4f24-b2a1-7be94718a881
ms.openlocfilehash: 6b59d7685aaada3ba44c03da2e5c27c75c8a473a
ms.sourcegitcommit: 725e86dabe2901175ecc63261c3bf05802dddff4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 07/31/2019
ms.locfileid: "68682382"
---
# <a name="running-linux-programs-on-windows"></a>Esecuzione di programmi Linux in Windows

Per eseguire un programma Linux in Windows, sono disponibili le opzioni seguenti:

- Eseguire il programma così com'è nel sottosistema Windows per Linux (WSL). In WSL il programma viene eseguito direttamente nell'hardware del computer e non in una macchina virtuale. WSL consente anche chiamate del file system dirette tra i sistemi Windows e Linux, eliminando la necessità del trasporto SSL. WSL è progettato come ambiente della riga di comando e non è consigliato per le applicazioni con utilizzo intensivo di grafica. Per altre informazioni, vedere la [documentazione del sottosistema Windows per Linux](/windows/wsl/about).
- Eseguire il programma così com'è in una macchina virtuale Linux o in un contenitore Docker, nel computer locale o in Azure. Per altre informazioni, vedere [Macchine virtuali](https://azure.microsoft.com/services/virtual-machines/) e [Docker in Azure](https://docs.microsoft.com/azure/docker/).
- Compilare il programma usando gcc o clang negli ambienti [MinGW](http://MinGW.org/) o [MinGW-w64](https://MinGW-w64.org/doku.php), che forniscono un livello di conversione per le chiamate dal sistema Linux al sistema Windows.
- Compilare ed eseguire il programma usando gcc o clang nell'ambiente [Cygwin](https://www.cygwin.com/), che fornisce un ambiente Linux più completo in Windows rispetto a MinGW o MinGW-w64.
- Trasferire manualmente il codice da Linux e compilarlo per Windows usando Microsoft C++ (MSVC). Questa opzione implica il refactoring del codice indipendente dalla piattaforma in librerie separate e quindi la riscrittura del codice specifico di Linux per l'uso di codice specifico di Windows (ad esempio, API Win32 o DirectX). Per le applicazioni che richiedono grafica con prestazioni elevate, questa è probabilmente la scelta migliore.

