---
title: 2.8 associazione di direttive | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 7bdac45e-ab55-42f0-bd47-a2e3d5bbab3e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dc5b702b17e01bb8d4625a837abdb71086113e68
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415902"
---
# <a name="28-directive-binding"></a>2.8 Associazione di direttive

Associazione dinamica di direttive deve essere conformi alle regole seguenti:

- Il **per**, **sezioni**, **singolo**, **master**, e **barriera** direttive associare all'in modo dinamico che li racchiude **parallele**, se ne esiste uno, indipendentemente dal valore di qualsiasi **se** clausola che possono essere presente in tale direttiva. Se nessuna area parallela è in fase di esecuzione, le direttive vengono eseguite da un team composto da solo il thread master.

- Il **ordinati** direttiva associa per l'inclusione in modo dinamico **per**.

- Il **atomico** direttiva applica accesso esclusivo alle **atomica** direttive in tutti i thread, non solo il team corrente.

- Il **critici** direttiva applica accesso esclusivo alle **critici** direttive in tutti i thread, non solo il team corrente.

- Una direttiva mai possibile associare in modo dinamico a qualsiasi direttiva di fuori il più vicino che li racchiude **parallele**.