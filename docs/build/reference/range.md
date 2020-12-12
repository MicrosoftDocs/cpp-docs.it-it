---
description: Altre informazioni su:/zona immis
title: /RANGE
ms.date: 11/04/2016
f1_keywords:
- /RANGE
helpviewer_keywords:
- /RANGE dumpbin option
- -RANGE dumpbin option
ms.assetid: 7eeba266-32be-49cc-a350-96bdf541f98a
ms.openlocfilehash: 9af54bddde977e92b5256f0835c31afbff1405d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225401"
---
# <a name="range"></a>/RANGE

Modifica l'output di dumpbin se utilizzato con altre opzioni DUMPBIN, ad esempio/RAWDATA o/DISASM.

## <a name="syntax"></a>Sintassi

```
/RANGE:vaMin[,vaMax]
```

## <a name="parameters"></a>Parametri

*vaMin*<br/>
Indirizzo virtuale da cui si desidera che venga avviata l'operazione DUMPBIN.

*vaMax*<br/>
Opzionale Indirizzo virtuale in corrispondenza del quale si desidera terminare l'operazione DUMPBIN. Se non viene specificato, DUMPBIN passa alla fine del file.

## <a name="remarks"></a>Commenti

Per visualizzare gli indirizzi virtuali per un'immagine, usare il file di mapping per l'immagine (RVA + base), l'opzione **/DISASM** o **/headers** di DUMPBIN o la finestra Disassembly nel debugger di Visual Studio.

## <a name="example"></a>Esempio

In questo esempio, **/zona immis** viene usato per modificare la visualizzazione dell'opzione **/DISASM** . In questo esempio il valore iniziale è espresso come numero decimale e il valore finale viene specificato come numero esadecimale.

```
dumpbin /disasm /range:4219334,0x004061CD t.exe
```

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)
