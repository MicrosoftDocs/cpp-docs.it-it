---
title: Archiviazione di indirizzi
ms.date: 11/04/2016
helpviewer_keywords:
- storage [C++], addresses
- addresses [C++], storage of
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
ms.openlocfilehash: 2a0e218d4d34fa1482986ecccd7da8adba38086b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50539373"
---
# <a name="storage-of-addresses"></a>Archiviazione di indirizzi

La quantità di memoria richiesta per un indirizzo e il significato dell'indirizzo dipendono dall'implementazione del compilatore. Non è garantito che i puntatori ai diversi tipi abbiano la stessa lunghezza. Di conseguenza, **sizeof(char \*)** non è necessariamente uguale a **sizeof(int\*)**.

**Sezione specifica Microsoft**

Per il compilatore C Microsoft, **sizeof(char \*)** è uguale a **sizeof(int\*)**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di puntatori](../c-language/pointer-declarations.md)