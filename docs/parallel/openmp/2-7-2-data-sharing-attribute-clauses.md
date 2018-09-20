---
title: 2.7.2 attributi per la condivisione dei dati clausole | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 47347d3c-18bd-441f-99cf-7737564c417f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4b8c53cace8d50f10fe638ea8604c46e457f69ee
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392523"
---
# <a name="272-data-sharing-attribute-clauses"></a>2.7.2 Clausole di attributi per la condivisione di dati

Diverse direttive accettano le clausole che consentono all'utente di controllare gli attributi di condivisione delle variabili per la durata dell'area. Condivisione delle clausole di attributi si applicano solo a variabili nell'ambito lessicale della direttiva in cui viene visualizzata la clausola. Non tutte le clausole seguenti sono consentite su tutte le direttive. L'elenco di clausole che sono validi in una direttiva specifica sono descritti con la direttiva.

Se una variabile è visibile quando un'operazione parallela o viene rilevato il costrutto di condivisione del lavoro e la variabile non viene specificata in una clausola di attributi di condivisione oppure **threadprivate** direttiva, quindi la variabile è condivisa. Le variabili statiche dichiarate entro l'ambito dinamico di un'area parallela vengono condivisi. Heap di memoria allocata (ad esempio, usando **malloc ()** in C o C++ o il **nuovi** operatore in C++) è condivisa. (Il puntatore alla memoria, tuttavia, possa essere privati o condivisi.) Le variabili con durata di archiviazione automatica dichiarata all'interno di extent dinamica di un'area parallela sono private.

La maggior parte delle clausole di accettare un *elenco di variabili* argomento, ovvero un elenco delimitato da virgole di variabili che sono visibili. Se si fa riferimento una variabile una clausola di attributi di condivisione dei dati è un tipo derivato da un modello e non sono presenti altri riferimenti a tale variabile nel programma, il comportamento sarà indefinito.

Tutte le variabili che vengono visualizzati all'interno di clausole di direttiva devono essere visibile. Le clausole possono essere ripetute in base alle necessità, ma nessuna variabile è possibile specificare più di una clausola, ad eccezione del fatto che una variabile può essere specificata sia in un **firstprivate** e una **lastprivate** clausola.

Le sezioni seguenti descrivono le clausole di attributi per la condivisione dei dati:

- **privato**, [sezione 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) a pagina 25.

- **firstprivate**, [sezione 2.7.2.2](../../parallel/openmp/2-7-2-2-firstprivate.md) nella pagina 26.

- **lastprivate**, [sezione 2.7.2.3](../../parallel/openmp/2-7-2-3-lastprivate.md) nella pagina 27.

- **condivisa**, [sezione 2.7.2.4](../../parallel/openmp/2-7-2-4-shared.md) nella pagina 27.

- **impostazione predefinita**, [sezione 2.7.2.5](../../parallel/openmp/2-7-2-5-default.md) nella pagina 28.

- **riduzione**, [sezione 2.7.2.6](../../parallel/openmp/2-7-2-6-reduction.md) nella pagina 28.

- **copyin**, [sezione 2.7.2.7](../../parallel/openmp/2-7-2-7-copyin.md) a pagina 31.

- **copyprivate**, [sezione 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) nella pagina 32.