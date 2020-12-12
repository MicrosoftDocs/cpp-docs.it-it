---
description: 'Altre informazioni su: più file inline'
title: File inline multipli
ms.date: 11/04/2016
helpviewer_keywords:
- inline files, multiple NMAKE
- multiple inline files
- NMAKE program, inline files
ms.assetid: 6d381dcf-0ed8-45d1-8df3-b4598d860b99
ms.openlocfilehash: d739591910007f69eca5d4834f6943ae0a0082ed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190601"
---
# <a name="multiple-inline-files"></a>File inline multipli

Un comando può creare più di un file inline.

## <a name="syntax"></a>Sintassi

```
command << <<
inlinetext
<<[KEEP | NOKEEP]
inlinetext
<<[KEEP | NOKEEP]
```

## <a name="remarks"></a>Osservazioni

Per ogni file, specificare una o più righe di testo inline seguito da una riga di chiusura contenente il delimitatore. Iniziare il testo del secondo file sulla riga che segue la riga di delimitazione per il primo file.

## <a name="see-also"></a>Vedi anche

[File inline in un makefile](inline-files-in-a-makefile.md)
