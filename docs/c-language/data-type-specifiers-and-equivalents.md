---
title: Identificatori ed equivalenti di tipi di dati
ms.date: 11/04/2016
helpviewer_keywords:
- type specifiers [C++], list
- widening integers
- data types [C++], equivalents
- sign-extending integral types
- zero-extending
- identifiers, data type
- data types [C++], specifiers
- simple types, names
- type names [C++], simple
ms.assetid: 0d4b515a-4f68-4786-83cf-a5d43c7cb6f3
ms.openlocfilehash: 4003d9427c160b0e1c725cdc591190bd9777b3de
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62234930"
---
# <a name="data-type-specifiers-and-equivalents"></a>Identificatori ed equivalenti di tipi di dati

In questa documentazione vengono utilizzati in genere i formati degli identificatori di tipo elencati nella tabella seguente anziché i formati estesi e si presuppone che il tipo `char` sia signed per impostazione predefinita. Di conseguenza, in questa documentazione `char` equivale a **signed char**.

### <a name="type-specifiers-and-equivalents"></a>Identificatori di tipo ed elementi equivalenti

|Identificatore di tipo|Elemento o elementi equivalenti|
|--------------------|---------------------|
|**signed char**1|**char**|
|**signed int**|**signed**, **int**|
|**signed short int**|**short**, **signed short**|
|**signed long int**|**long**, **signed long**|
|**unsigned char**|—|
|**int senza segno**|**unsigned**|
|**unsigned short int**|**unsigned short**|
|**unsigned long int**|**long senza segno**|
|**float**|—|
|**long double**2|—|

1   Quando si crea il tipo **char** senza segno per impostazione predefinita (specificando l'opzione del compilatore /J), non è possibile abbreviare **signed char** come **char**.

2   In sistemi operativi a 32 bit e a 64 bit il compilatore C Microsoft esegue il mapping di **long double** al tipo **double**.

**Specifico di Microsoft**

È possibile specificare l'opzione del compilatore /J per modificare il tipo predefinito **char** con segno in senza segno. Quando viene applicata questa opzione, **char** equivale a **unsigned char** ed è necessario usare la parola chiave **signed** per dichiarare un valore di carattere con segno. Se un valore **char** viene dichiarato esplicitamente, l'opzione /J non ha effetto e il valore assume la forma con segno quando esteso a un tipo **int**. Il tipo **char** viene esteso in base a zero quando esteso al tipo **int**.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Identificatori di tipi C](../c-language/c-type-specifiers.md)
