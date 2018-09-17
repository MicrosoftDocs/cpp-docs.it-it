---
title: File Inline multipli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inline files, multiple NMAKE
- multiple inline files
- NMAKE program, inline files
ms.assetid: 6d381dcf-0ed8-45d1-8df3-b4598d860b99
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 87d68034c4f0018d65020915d24d0b5c2ec5d61a
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45725595"
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