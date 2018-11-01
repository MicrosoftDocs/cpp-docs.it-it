---
title: File inline multipli
ms.date: 11/04/2016
helpviewer_keywords:
- inline files, multiple NMAKE
- multiple inline files
- NMAKE program, inline files
ms.assetid: 6d381dcf-0ed8-45d1-8df3-b4598d860b99
ms.openlocfilehash: ec531e5716098725782010927201ef57e2a8aa24
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50558158"
---
# <a name="multiple-inline-files"></a>File inline multipli

Un comando è possibile creare più di un file inline.

## <a name="syntax"></a>Sintassi

```
command << <<
inlinetext
<<[KEEP | NOKEEP]
inlinetext
<<[KEEP | NOKEEP]
```

## <a name="remarks"></a>Note

Per ogni file, specificare uno o più righe di testo inline seguito da una riga di chiusura che contiene il delimitatore. Iniziare il testo del secondo file nella riga successiva alla riga di delimitazione per il primo file.

## <a name="see-also"></a>Vedere anche

[File inline in un makefile](../build/inline-files-in-a-makefile.md)