---
title: 2.8 Associazione di direttive
ms.date: 11/04/2016
ms.assetid: 7bdac45e-ab55-42f0-bd47-a2e3d5bbab3e
ms.openlocfilehash: fb22d1b503303842ff73550c1c6544cae7e5f2f3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50528618"
---
# <a name="28-directive-binding"></a>2.8 Associazione di direttive

Associazione dinamica di direttive deve essere conformi alle regole seguenti:

- Il **per**, **sezioni**, **singolo**, **master**, e **barriera** direttive associare all'in modo dinamico che li racchiude **parallele**, se ne esiste uno, indipendentemente dal valore di qualsiasi **se** clausola che possono essere presente in tale direttiva. Se nessuna area parallela è in fase di esecuzione, le direttive vengono eseguite da un team composto da solo il thread master.

- Il **ordinati** direttiva associa per l'inclusione in modo dinamico **per**.

- Il **atomico** direttiva applica accesso esclusivo alle **atomica** direttive in tutti i thread, non solo il team corrente.

- Il **critici** direttiva applica accesso esclusivo alle **critici** direttive in tutti i thread, non solo il team corrente.

- Una direttiva mai possibile associare in modo dinamico a qualsiasi direttiva di fuori il più vicino che li racchiude **parallele**.