---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2011'
title: Errore degli strumenti del linker LNK2011
ms.date: 11/04/2016
f1_keywords:
- LNK2011
helpviewer_keywords:
- LNK2011
ms.assetid: 04991ef5-49d5-46c7-8eee-a9d1d3fc541e
ms.openlocfilehash: f149324a61d34333e8f29f70bf5fee4cd952ba8b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338468"
---
# <a name="linker-tools-error-lnk2011"></a>Errore degli strumenti del linker LNK2011

oggetto precompilato non collegato; l'immagine potrebbe non essere eseguita

Se si usano le intestazioni precompilate, il collegamento richiede che tutti i file oggetto creati con le intestazioni precompilate debbano essere collegati. Se si dispone di un file di origine usato per generare un'intestazione precompilata da usare con altri file di origine, è ora necessario includere il file oggetto creato insieme all'intestazione precompilata.

Se, ad esempio, si compila un file denominato STUB. cpp per creare un'intestazione precompilata da usare con altri file di origine, è necessario collegarsi a STUB. obj. in caso contrario, si otterrà questo errore. Nelle righe di comando seguenti, la riga uno viene utilizzata per creare un'intestazione precompilata, COMMON. pch, che viene utilizzata con PROG1. cpp e PROG2. cpp nelle righe due e tre. Il file STUB. cpp contiene solo `#include` righe (le stesse `#include` righe di PROG1. cpp e PROG2. cpp) e viene usato solo per generare intestazioni precompilate. Nell'ultima riga, STUB. obj deve essere collegato per evitare il LNK2011.

```
cl /c /Yccommon.h stub.cpp
cl /c /Yucommon.h prog1.cpp
cl /c /Yucommon.h prog2.cpp
link /out:prog.exe stub.obj prog1.obj prog2.obj
```
