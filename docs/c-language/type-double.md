---
title: Tipo double
ms.date: 11/04/2016
helpviewer_keywords:
- mantissas, floating-point variables
- type double
- portability [C++], type double
- double data type
ms.assetid: 17c85b24-1475-4d41-a03c-ddf2d6561d34
ms.openlocfilehash: 43e6cc444f4d6a973fc58b5ce550e468066aca1b
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56151858"
---
# <a name="type-double"></a>Tipo double

I valori a doppia precisione con tipo double sono costituiti da 8 byte. Il formato è simile al formato di tipo float con la differenza che il numero viene rappresentato con un esponente a 11 bit in eccesso 1023 e con una mantissa a 52 bit, più 1 bit più significativi implicito. Questo formato specifica un intervallo di valori inclusi approssimativamente tra 1,7E-308 e 1,7E+308 per il tipo double.

**Sezione specifica Microsoft**

Il tipo double contiene 64 bit: 1 per il segno, 11 per l'esponente e 52 per la mantissa. L'intervallo è +/-1,7E-308 con almeno 15 cifre di precisione.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)
