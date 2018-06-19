---
title: Errore irreversibile C1128 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1128
dev_langs:
- C++
helpviewer_keywords:
- C1128
ms.assetid: 6f9580fd-ecef-48be-9780-dcf666704279
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e1d2604b17b656efab3a3575469eff6a02df960c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33226265"
---
# <a name="fatal-error-c1128"></a>Errore irreversibile C1128
numero di sezioni ha superato il limite di formato file oggetto: compilare con /bigobj  
  
 Un file con estensione obj superato il numero di sezioni consentite, un limite del formato file oggetto COFF.  
  
 Limite può essere il risultato dell'uso [/Gy](../../build/reference/gy-enable-function-level-linking.md) e una build di debug. **/Gy** fa sì che le funzioni passino nelle rispettive sezioni COMDAT. In una build di debug, è una sezione di informazioni di debug per ogni funzione COMDAT.  
  
 C1128 può essere causato anche quando sono presenti troppe funzioni inline.  
  
 Per correggere l'errore, suddividere il file di origine in più file del codice sorgente, la compilazione senza **/Gy**, o compilare [/bigobj (aumenta il numero di sezioni in. File obj)](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md).  Se si esegue la compilazione con **/Gy**, è necessario specificare le ottimizzazioni singolarmente, poiché **/O2** e **/O1** sia che implicano **/Gy**.  
  
 Se possibile, compilare senza informazioni di debug.  
  
 È necessario anche avere creazioni di istanze specifiche dei modelli nel file di codice sorgente separato, piuttosto che il compilatore generarli.  
  
 Durante il porting del codice, C1128 verrà probabilmente visualizzato per primo quando si utilizza x64 compilatore e gran parte in un secondo momento con x86 compilatore. x64 avrà almeno 4 sezioni associate a ogni funzione compilata **/Gy** o resa inline da modelli o classe: del codice, pdata e informazioni di debug e possibilmente xdata.  X86 non avrà pdata.