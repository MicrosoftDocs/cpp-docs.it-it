---
title: Flussi di input | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- reading data [C++], from input streams
- data [C++], reading from input stream
- input streams
- input stream objects
ms.assetid: f14d8954-8f8c-4c3c-8b99-14ddb3683f94
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 595a855e7ab5ef74c577dc4d80d6332783635d82
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="input-streams"></a>Flussi di input

Un oggetto di flusso di input è un'origine di byte. Le tre classi più importanti relative ai flussi di input sono [istream](../standard-library/basic-istream-class.md), [ifstream](../standard-library/basic-ifstream-class.md) e [istringstream](../standard-library/basic-istringstream-class.md).

La classe `istream` è quella più adatta per l'input in modalità testo sequenziale. È possibile configurare gli oggetti della classe `istream` per il funzionamento con o senza buffer. Tutte le funzionalità della classe di base, `ios`, sono incluse in `istream`. Raramente si creano oggetti dalla classe `istream`. Al contrario, si usa in genere l'oggetto `cin` predefinito, che appartiene alla classe [ostream](../standard-library/basic-ostream-class.md). In alcuni casi, è possibile assegnare `cin` ad altri oggetti di flusso dopo l'avvio del programma.

La classe `ifstream` supporta l'input da file su disco. Se è necessario un file su disco di solo input, costruire un oggetto della classe `ifstream`. È possibile specificare dati binari o in modalità testo. Se si specifica un nome di file nel costruttore, tale file viene aperto automaticamente quando l'oggetto viene costruito. In alternativa, è possibile usare la funzione `open` dopo aver richiamato il costruttore predefinito. Molte opzioni di formattazione e funzioni membro si applicano a oggetti `ifstream`. Tutte le funzionalità delle classi di base `ios` e `istream` sono incluse in `ifstream`.

Analogamente alla funzione di libreria `sscanf_s`, la classe `istringstream` supporta l'input da stringhe in memoria. Per estrarre dati da una matrice di caratteri che ha una terminazione null, allocare e inizializzare la stringa e quindi costruire un oggetto della classe `istringstream`.

## <a name="in-this-section"></a>In questa sezione

[Costruzione di oggetti di flusso di input](../standard-library/constructing-input-stream-objects.md)

[Uso degli operatori di estrazione](../standard-library/using-extraction-operators.md)

[Verifica degli errori di estrazione](../standard-library/testing-for-extraction-errors.md)

[Manipolatori del flusso di input](../standard-library/input-stream-manipulators.md)

[Funzioni membro del flusso di input](../standard-library/input-stream-member-functions.md)

[Overload dell'operatore >> per classi personalizzate](../standard-library/overloading-the-input-operator-for-your-own-classes.md)

## <a name="see-also"></a>Vedere anche

[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
