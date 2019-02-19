---
title: Archiviazione di indirizzi
ms.date: 11/04/2016
helpviewer_keywords:
- storage [C++], addresses
- addresses [C++], storage of
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
ms.openlocfilehash: 47b09ab6cd0b2045206daaee4badad32858ff934
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56148738"
---
# <a name="storage-of-addresses"></a>Archiviazione di indirizzi

La quantità di memoria richiesta per un indirizzo e il significato dell'indirizzo dipendono dall'implementazione del compilatore. Non è garantito che i puntatori ai diversi tipi abbiano la stessa lunghezza. Di conseguenza, **sizeof(char \*)** non è necessariamente uguale a **sizeof(int\*)**.

**Sezione specifica Microsoft**

Per il compilatore C Microsoft, **sizeof(char \*)** è uguale a **sizeof(int\*)**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di puntatori](../c-language/pointer-declarations.md)
