---
title: /RANGE
ms.date: 11/04/2016
f1_keywords:
- /RANGE
helpviewer_keywords:
- /RANGE dumpbin option
- -RANGE dumpbin option
ms.assetid: 7eeba266-32be-49cc-a350-96bdf541f98a
ms.openlocfilehash: c631057e47e1a52a58d2b1304133dfdfc008ae14
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62319707"
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

[Opzioni di DUMPBIN](dumpbin-options.md)
