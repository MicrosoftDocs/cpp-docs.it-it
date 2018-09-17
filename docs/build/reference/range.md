---
title: ': INTERVALLO | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /RANGE
dev_langs:
- C++
helpviewer_keywords:
- /RANGE dumpbin option
- -RANGE dumpbin option
ms.assetid: 7eeba266-32be-49cc-a350-96bdf541f98a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47e7525b8c1872616182141d624bff8f94571952
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712192"
---
# <a name="range"></a>/RANGE

Modifica l'output di dumpbin quando usato con altre opzioni di dumpbin, ad esempio /RAWDATA o opzione /DISASM.

## <a name="syntax"></a>Sintassi

```
/RANGE:vaMin[,vaMax]
```

## <a name="parameters"></a>Parametri

*vaMin*<br/>
L'indirizzo virtuale in cui si desidera l'operazione di dumpbin per iniziare.

*vaMax*<br/>
(Facoltativo) L'indirizzo virtuale in corrispondenza del quale si desidera che l'operazione di dumpbin per terminare. Se non specificato, dumpbin passerà alla fine del file.

## <a name="remarks"></a>Note

Per visualizzare gli indirizzi virtuali per un'immagine, usare il file di mappa dell'immagine (RVA + Base), il **opzione /DISASM** oppure **/HEADERS** opzione di dumpbin o la finestra disassembly del debugger di Visual Studio.

## <a name="example"></a>Esempio

In questo esempio, **/Range** consente di modificare la visualizzazione delle **opzione /disasm** opzione. In questo esempio, il valore iniziale viene espresso come numero decimale e il valore finale viene specificato come un numero esadecimale.

```
dumpbin /disasm /range:4219334,0x004061CD t.exe
```

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)