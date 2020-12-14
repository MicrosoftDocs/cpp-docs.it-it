---
description: 'Altre informazioni su: specifica di un file inline'
title: Specifica di un file inline
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, inline files
- inline files [C++], specifying NMAKE
- files [C++], inline
ms.assetid: 393eccfb-3fc9-4bac-a30c-8ac8d221cca3
ms.openlocfilehash: 461bf507f707512aa690e81dc5752a97d0c1c4ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224608"
---
# <a name="specifying-an-inline-file"></a>Specifica di un file inline

Specificare due parentesi angolari (<<) nel comando in cui deve essere visualizzato il *nome file* . Le parentesi angolari non possono essere un'espansione di macro.

## <a name="syntax"></a>Sintassi

```
<<[filename]
```

## <a name="remarks"></a>Osservazioni

Quando si esegue il comando, le parentesi acute vengono sostituite da *filename*, se specificato, o da un nome univoco generato da NMAKE. Se specificato, *filename* deve seguire le parentesi angolari senza uno spazio o una tabulazione. Un percorso è consentito. Non è necessaria o si presuppone alcuna estensione. Se si specifica *filename* , il file viene creato nella directory corrente o specificata, sovrascrivendo il file esistente con tale nome; in caso contrario, viene creato nella directory TMP o nella directory corrente, se la variabile di ambiente TMP non è definita. Se viene riutilizzato un *nome file* precedente, NMAKE sostituisce il file precedente.

## <a name="see-also"></a>Vedi anche

[File inline in un makefile](inline-files-in-a-makefile.md)
