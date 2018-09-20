---
title: 2.7 ambiente dei dati | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 74e44b3c-e18c-4773-8e78-cd6c4413ae57
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 17c60c621defa15c034f57d0af8f14637db54f03
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46378137"
---
# <a name="27-data-environment"></a>2.7 Ambiente dei dati

Questa sezione viene presentata una direttiva e numerose clausole per controllare l'ambiente dei dati durante l'esecuzione di aree parallele, come indicato di seguito:

- Oggetto **threadprivate** (direttiva) (vedere la sezione seguente) viene fornita per rendere locale a un thread di ambito file, dell'ambito dello spazio dei nomi o variabili statico dall'ambito del blocco.

- Le clausole che possono essere specificate per le direttive per controllare gli attributi di condivisione delle variabili per la durata dei costrutti di condivisione del lavoro o paralleli sono descritte nel [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) a pagina 25.