---
title: 2.7 Ambiente dei dati
ms.date: 11/04/2016
ms.assetid: 74e44b3c-e18c-4773-8e78-cd6c4413ae57
ms.openlocfilehash: b65dfc7d7694b36ef4f89351579cd73e07ab537c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50491968"
---
# <a name="27-data-environment"></a>2.7 Ambiente dei dati

Questa sezione viene presentata una direttiva e numerose clausole per controllare l'ambiente dei dati durante l'esecuzione di aree parallele, come indicato di seguito:

- Oggetto **threadprivate** (direttiva) (vedere la sezione seguente) viene fornita per rendere locale a un thread di ambito file, dell'ambito dello spazio dei nomi o variabili statico dall'ambito del blocco.

- Le clausole che possono essere specificate per le direttive per controllare gli attributi di condivisione delle variabili per la durata dei costrutti di condivisione del lavoro o paralleli sono descritte nel [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) a pagina 25.