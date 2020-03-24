---
title: Avviso del compilatore di risorse RW4004
ms.date: 11/04/2016
f1_keywords:
- RW4004
helpviewer_keywords:
- RW4004
ms.assetid: 596b6a89-9ce7-4ba7-bdcb-e8054c7efafa
ms.openlocfilehash: ca0fb271a5ab43994ec37cc8d59c33877903f6e8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182344"
---
# <a name="resource-compiler-warning-rw4004"></a>Avviso del compilatore di risorse RW4004

Carattere ASCII non equivalente a codice tasto virtuale

È stato usato un valore letterale stringa per il codice tasto virtuale in un tasto di scelta rapida di tipo VIRTKEY.

Questo avviso permette di continuare, ma tenere presente che i tasti di scelta rapida generati potrebbero non corrispondere alla stringa specificata (i tasti VIRTKEY usano codici tasto diversi rispetto ai tasti di scelta rapida ASCII).

Sebbene i valori letterali stringa siano sintatticamente validi, è possibile assicurarsi di ottenere solo l'acceleratore desiderato usando il **VK_\* #define** valori in Windows. h.
