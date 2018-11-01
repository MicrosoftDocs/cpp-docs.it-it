---
title: Avviso del compilatore di risorse RW4004
ms.date: 11/04/2016
f1_keywords:
- RW4004
helpviewer_keywords:
- RW4004
ms.assetid: 596b6a89-9ce7-4ba7-bdcb-e8054c7efafa
ms.openlocfilehash: bafd1084a665fc656fe184064a48e5fffc61c957
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50485644"
---
# <a name="resource-compiler-warning-rw4004"></a>Avviso del compilatore di risorse RW4004

Carattere ASCII non equivalente a codice tasto virtuale

È stato usato un valore letterale stringa per il codice tasto virtuale in un tasto di scelta rapida di tipo VIRTKEY.

Questo avviso permette di continuare, ma tenere presente che i tasti di scelta rapida generati potrebbero non corrispondere alla stringa specificata (i tasti VIRTKEY usano codici tasto diversi rispetto ai tasti di scelta rapida ASCII).

Valori letterali stringa siano sintatticamente validi, l'unico modo di ottenere il tasto di scelta rapida desiderato usando il **VK _\* #define** valori in Windows. h.