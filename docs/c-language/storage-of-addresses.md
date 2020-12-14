---
description: 'Altre informazioni su: archiviazione di indirizzi'
title: Archiviazione di indirizzi
ms.date: 11/04/2016
helpviewer_keywords:
- storage [C++], addresses
- addresses [C++], storage of
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
ms.openlocfilehash: 8f0b51370659d7a23739d75f53492d171c17e422
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97296693"
---
# <a name="storage-of-addresses"></a>Archiviazione di indirizzi

La quantità di memoria richiesta per un indirizzo e il significato dell'indirizzo dipendono dall'implementazione del compilatore. Non è garantito che i puntatori ai diversi tipi abbiano la stessa lunghezza. Di conseguenza, **sizeof(char \*)** non è necessariamente uguale a **sizeof(int\*)**.

**Specifico di Microsoft**

Per il compilatore C Microsoft, **sizeof(char \*)** è uguale a **sizeof(int\*)**.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Dichiarazioni di puntatori](../c-language/pointer-declarations.md)
