---
title: File e flussi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- files [C++]
- streams
ms.assetid: f61e712b-eac9-4c28-bb18-97c3786ef387
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a93fc1aa0f3108d4897a45b9014970afab220439
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="files-and-streams"></a>File e flussi
Un programma comunica con l'ambiente di destinazione tramite la lettura e scrittura dei file. Un file può essere:  
  
-   Un set di dati che è possibile leggere e scrivere più volte.  
  
-   Un flusso di byte generati da un programma (ad esempio una pipeline).  
  
-   Un flusso di byte ricevuti da un dispositivo periferico o inviati a un dispositivo periferico.  
  
 Gli ultimi due elementi sono file interattivi. I file sono in genere i mezzi principali tramite i quali interagire con un programma. Manipolare tutti questi tipi di file allo stesso modo, chiamando funzioni di libreria. Includere l'intestazione standard STDIO.H per dichiarare la maggior parte di queste funzioni.  
  
 Prima di poter eseguire molte delle operazioni in un file, il file deve essere aperto. Aprire un file comporta la sua associazione a un flusso, una struttura di dati all'interno della libreria standard C che maschera molte differenze tra file di vari tipi. La libreria mantiene lo stato di ogni flusso in un oggetto di tipo FILE.  
  
 L'ambiente di destinazione apre tre file prima dell'avvio del programma. È possibile aprire un file chiamando la funzione di libreria [fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md) con due argomenti. (La funzione `fopen` è deprecata, al suo posto usare [fopen_s, _wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md)). Il primo argomento è un nome file. Il secondo argomento è una stringa C che specifica:  
  
-   Se si desidera leggere i dati dal file o scrivere dati nel file o entrambe le cose.  
  
-   Se si desidera generare nuovi contenuti per il file (o creare un file se in precedenza non esisteva) oppure lasciare inalterato il contenuto esistente.  
  
-   Mentre scrivere in un file può alterare il contenuto esistente oppure potrebbe semplicemente aggiungere byte alla fine del file.  
  
-   Se si desidera modificare un flusso di testo o un flusso binario.  
  
 Una volta aperto il file con successo, è possibile determinare se il flusso è orientato ai byte (un flusso di byte) o orientato ai caratteri wide (un flusso di caratteri wide). Un flusso inizialmente è privo di associazione. Chiamare alcune funzioni in modo che operino sul flusso lo rendono orientato ai byte, mentre altre funzioni lo rendono orientato ai caratteri wide. Una volta stabilito, un flusso mantiene il proprio orientamento fino alla chiusura da parte di una chiamata a [fclose](../c-runtime-library/reference/fclose-fcloseall.md) o a [freopen](../c-runtime-library/reference/freopen-wfreopen.md).  
  
 © 1989-2001 da P.J. Plauger e Jim Brodie. Tutti i diritti sono riservati.  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi di testo e binari](../c-runtime-library/text-and-binary-streams.md)   
 [Flussi di byte e "wide"](../c-runtime-library/byte-and-wide-streams.md)   
 [Controllo dei flussi](../c-runtime-library/controlling-streams.md)   
 [Stati di flusso](../c-runtime-library/stream-states.md)