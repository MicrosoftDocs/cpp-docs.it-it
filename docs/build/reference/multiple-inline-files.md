---
title: File inline multipli
ms.date: 11/04/2016
helpviewer_keywords:
- inline files, multiple NMAKE
- multiple inline files
- NMAKE program, inline files
ms.assetid: 6d381dcf-0ed8-45d1-8df3-b4598d860b99
ms.openlocfilehash: 71f17ff6717e717693facb21b4a4341a040b14c1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320591"
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

[File inline in un makefile](inline-files-in-a-makefile.md)
