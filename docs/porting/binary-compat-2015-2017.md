---
title: Compatibilità binaria C++ 2015-2019
description: Viene descritto il funzionamento della compatibilità binaria tra i file C++ compilati in Visual Studio 2015, 2017 e 2019. Una Microsoft Visual C++ pacchetto ridistribuibile funziona per tutte e tre le versioni.
ms.date: 02/17/2021
helpviewer_keywords:
- binary compatibility, Visual C++
ms.openlocfilehash: a91e339e70843087adc12238edac91332c1a4453
ms.sourcegitcommit: c0c9cdae79f19655e809a4979227c51bb19cff63
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2021
ms.locfileid: "102236576"
---
# <a name="c-binary-compatibility-between-visual-studio-2015-2017-and-2019"></a>Compatibilità binaria C++ tra Visual Studio 2015, 2017 e 2019

I set di strumenti del compilatore Microsoft C++ (MSVC) in Visual Studio 2013 e versioni precedenti non garantiscono la compatibilità binaria tra le versioni principali. Non è possibile collegare i file oggetto, le librerie statiche, le librerie dinamiche e gli eseguibili compilati da versioni diverse di questi set di strumenti. L'ABI, i formati degli oggetti e le librerie di runtime non sono compatibili.

Questo comportamento è stato modificato in Visual Studio 2015, 2017 e 2019. Le librerie e le app di Runtime compilate da una qualsiasi di queste versioni del compilatore sono compatibili con binario. Si riflette nel numero principale del set di strumenti C++, che inizia con 14 per tutte e tre le versioni. (La versione del set di strumenti è V140 per Visual Studio 2015, V141 per 2017 e V142 per 2019). Supponiamo di avere librerie di terze parti compilate da Visual Studio 2015. È comunque possibile usarli in un'applicazione compilata da Visual Studio 2017 o 2019. Non è necessario ricompilare con un set di strumenti corrispondente. La versione più recente di Microsoft Visual C++ pacchetto ridistribuibile (ridistribuibile) funziona per tutti.

## <a name="restrictions-on-binary-compatibility"></a><a name="restrictions"></a> Limitazioni relative alla compatibilità binaria

Esistono tre importanti restrizioni sulla compatibilità binaria tra i set di strumenti V140, V141 e V142 e gli aggiornamenti della versione con numerazione secondaria:

- È possibile combinare i binari compilati da versioni diverse dei set di strumenti V140, V141 e V142. Tuttavia, è necessario collegarsi usando un set di strumenti almeno quanto più recente del file binario più recente dell'app. Ecco un esempio: è possibile collegare un'app compilata usando qualsiasi set di strumenti 2017 (V141, versioni da 15,0 a 15,9) a una libreria statica compilata usando, ad esempio, Visual Studio 2019 versione 16,2 (v142), se sono collegati usando un set di strumenti versione 16,2 o successiva. È possibile collegare una libreria della versione 16,2 a un'app della versione 16,4, purché si usi un set di strumenti 16,4 o versioni successive.

- Il ridistribuibile usato dall'app ha una restrizione di compatibilità binaria simile. Quando si combinano file binari compilati da diverse versioni supportate del set di strumenti, la versione ridistribuibile deve essere almeno la nuova del set di strumenti più recente usato da qualsiasi componente dell'app.

- Le librerie statiche o i file oggetto compilati usando l'opzione del compilatore [ `/GL` (ottimizzazione del programma intero)](../build/reference/gl-whole-program-optimization.md) o collegati usando [ `/LTCG` (generazione di codice in fase di collegamento)](../build/reference/ltcg-link-time-code-generation.md) *non sono* compatibili con il formato binario tra le versioni, inclusi gli aggiornamenti della versione secondaria. Tutti i file oggetto e le librerie compilati con **`/GL`** e **`/LTCG`** devono utilizzare esattamente lo stesso set di strumenti per la compilazione e il collegamento finale. Ad esempio, il codice compilato usando **`/GL`** nel set di strumenti di Visual studio 2019 versione 16,7 non può essere collegato al codice compilato usando **`/GL`** nel set di strumenti di visual studio 2019 versione 16,8. Il compilatore genera un [errore irreversibile l'errore C1047](../error-messages/compiler-errors-1/fatal-error-c1047.md).

## <a name="upgrade-the-microsoft-visual-c-redistributable-from-visual-studio-2015-or-2017-to-visual-studio-2019"></a>Aggiornare il Microsoft Visual C++ ridistribuibile da Visual Studio 2015 o 2017 a Visual Studio 2019

Il numero di versione principale ridistribuibile Microsoft Visual C++ è lo stesso per Visual Studio 2015, 2017 e 2019. Ciò significa che è possibile installare solo un'istanza del ridistribuibile alla volta. Una versione più recente sovrascrive qualsiasi versione precedente già installata. Ad esempio, un'app può installare ridistribuibile da Visual Studio 2015. Quindi, un'altra app installa il ridistribuibile da Visual Studio 2019. La versione 2019 sovrascrive la versione precedente, ma poiché è compatibile con binario, l'app precedente funziona ancora correttamente. Si garantisce che la versione più recente di Redistributable includa tutte le funzionalità più recenti, gli aggiornamenti della sicurezza e le correzioni di bug. Per questo motivo è sempre consigliabile eseguire l'aggiornamento alla versione più recente disponibile.

Analogamente, non è possibile installare un ridistribuibile precedente quando è già installata una versione più recente. Se si prova, il programma di installazione segnala un errore. Verrà visualizzato un errore simile al seguente se si installa 2015 o 2017 ridistribuibile in un computer in cui è già presente la versione 2019:

```Output
0x80070666 - Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs on the Control Panel.
```

Questo errore è stato progettato. Si consiglia di lasciare installata la versione più recente. Verificare che il programma di installazione sia in grado di risolvere l'errore in modo invisibile all'utente.

## <a name="see-also"></a>Vedi anche

[Cronologia modifiche Visual C++](../porting/visual-cpp-change-history-2003-2015.md)\
[I download ridistribuibili Visual C++ più recenti supportati](https://support.microsoft.com/help/2977003/the-latest-supported-visual-c-downloads)
