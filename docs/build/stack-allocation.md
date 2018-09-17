---
title: Stack di allocazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 098e51f2-eda6-40d0-b149-0b618aa48b47
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9e0210239f2d915fcc3445a74cfdf5b0d1796df7
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45701499"
---
# <a name="stack-allocation"></a>Allocazione nello stack

Prologo di una funzione è responsabile dell'allocazione di spazio dello stack per le variabili locali, registri salvati, stack di parametri e registrare i parametri.

L'area dei parametri è sempre nella parte inferiore dello stack (anche se viene usato alloca), in modo che sarà sempre adiacente per l'indirizzo del mittente durante qualsiasi chiamata di funzione. Contiene almeno quattro voci, ma sempre spazio sufficiente per contenere tutti i parametri necessari per qualsiasi funzione che può essere chiamato. Si noti che lo spazio viene sempre allocato per i parametri del registro, anche se tali parametri non vengono mai trasferiti nello stack. un oggetto chiamato è garantito che sia stato allocato spazio per tutti i relativi parametri. Gli indirizzi personali sono necessari per gli argomenti dei registri in modo che un'area contigua è disponibile nel caso in cui la funzione chiamata deve accettare l'indirizzo dell'elenco di argomenti (va_list) o un argomento singolo. Quest'area include inoltre un modo pratico per salvare gli argomenti di registro durante l'esecuzione del thunk e come opzione di debug (ad esempio, rende gli argomenti facili da trovare durante il debug se sono memorizzate nei relativi indirizzi iniziali nel codice di prologo). Anche se la funzione chiamata dispone di meno di 4 parametri, questi 4 posizioni dello stack sono di proprietà in modo efficace dalla funzione chiamata e possono essere usate dalla funzione chiamata per altri scopi oltre il salvataggio di parametro dei valori di registro.  In questo modo il chiamante non può salvare informazioni in quest'area dello stack in una chiamata di funzione.

Se lo spazio viene allocato in modo dinamico (alloca) in una funzione, quindi un registro non volatile deve essere usato come puntatore ai frame per contrassegnare la base della parte fissa dello stack e tale registro deve essere salvato e inizializzata nel prologo. Si noti che quando viene utilizzato alloca, chiamate allo stesso chiamato dallo stesso chiamante possono avere diversi indirizzi personali per i parametri del registro.

Lo stack verrà sempre mantenuto a 16 byte allineati, tranne che all'interno del prologo (ad esempio, dopo che viene inserito l'indirizzo del mittente) e dove indicato nel [tipi di funzione](../build/function-types.md) per una determinata classe di funzioni di frame.

Di seguito è riportato un esempio di layout dello stack di chiamate di funzione A una non-foglia funzionano where prologo di una funzione a B. è già allocato spazio per tutti i parametri di register e stack richiesti da B nella parte inferiore dello stack. La chiamata inserisce l'indirizzo del mittente e prologo del B alloca spazio per le variabili locali, i registri non volatili e lo spazio necessario per chiamare le funzioni. Se B utilizza alloca, lo spazio viene allocato tra il registro/non volatile di variabile locale Salva area e l'area dello stack del parametro.

![Esempio di conversione AMD](../build/media/vcamd_conv_ex_5.png "esempio di conversione AMD")

Quando la funzione B chiama un'altra funzione, l'indirizzo del mittente è inserito sotto l'indirizzo dell'abitazione di RCX.

## <a name="see-also"></a>Vedere anche

[Uso dello stack](../build/stack-usage.md)