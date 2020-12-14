---
description: 'Altre informazioni su: avviso del compilatore di risorse RW4004'
title: Avviso del compilatore di risorse RW4004
ms.date: 11/04/2016
f1_keywords:
- RW4004
helpviewer_keywords:
- RW4004
ms.assetid: 596b6a89-9ce7-4ba7-bdcb-e8054c7efafa
ms.openlocfilehash: 5609d49e242ba7d74025622c53c279ae1b0da854
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236997"
---
# <a name="resource-compiler-warning-rw4004"></a>Avviso del compilatore di risorse RW4004

Carattere ASCII non equivalente a codice tasto virtuale

È stato usato un valore letterale stringa per il codice tasto virtuale in un tasto di scelta rapida di tipo VIRTKEY.

Questo avviso permette di continuare, ma tenere presente che i tasti di scelta rapida generati potrebbero non corrispondere alla stringa specificata (i tasti VIRTKEY usano codici tasto diversi rispetto ai tasti di scelta rapida ASCII).

Sebbene i valori letterali stringa siano sintatticamente validi, è possibile assicurarsi di ottenere solo l'acceleratore desiderato usando i valori **VK_ \* #define** in Windows. h.
