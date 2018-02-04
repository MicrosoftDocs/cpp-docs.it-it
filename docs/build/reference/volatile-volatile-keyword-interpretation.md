---
title: -volatile (interpretazione della parola chiave volatile) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /volatile:iso
- /volatile:ms
- /volatile
dev_langs:
- C++
helpviewer_keywords:
- /volatile compiler option
- /volatile compiler option [C++]
- -volatile compiler option
- volatile compiler option [C++]
- volatile compiler option
- -volatile compiler option [C++]
ms.assetid: 9d08fcc6-5bda-44c8-8151-8d8d54f164b8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4528d53da01ae83f179f07ba52b2c86c335e883c
ms.sourcegitcommit: 30ab99c775d99371ed22d1a46598e542012ed8c6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2018
---
# <a name="volatile-volatile-keyword-interpretation"></a>/volatile (interpretazione della parole chiave volatile)

Specifica il modo in [volatile](../../cpp/volatile-cpp.md) parola chiave è da interpretare.

## <a name="syntax"></a>Sintassi

> **/volatile:**{**iso**|**ms**}  

## <a name="arguments"></a>Argomenti

**/volatile:iso**  
Seleziona strict `volatile` semantica definita dal linguaggio standard ISO C++. Semantica Acquisisci/rilascia non è garantita per accesso volatile. Se il compilatore fa riferimento ARM, questa è l'interpretazione predefinita dei `volatile`.

**/volatile:ms**  
Seleziona estese Microsoft `volatile` semantica, a cui aggiunta memoria ordinamento garanzie oltre il linguaggio standard ISO C++. Semantica Acquisisci/rilascia garantita per accesso volatile. Tuttavia, questa opzione impone inoltre al compilatore di generare barriere di memoria hardware, che potrebbero aggiungere un overhead significativo su ARM e altre architetture di ordinamento memoria debole. Se il compilatore destinato a qualsiasi piattaforma, ad eccezione di ARM, questa è l'interpretazione predefinita dei `volatile`.

## <a name="remarks"></a>Note

È consigliabile utilizzare **/volatile:iso** insieme primitive esplicite di sincronizzazione e intrinseche al compilatore quando si utilizzano memoria condivisa tra thread. Per ulteriori informazioni, vedere [volatile](../../cpp/volatile-cpp.md).

Se si porting di codice esistente o modificare questa opzione all'interno di un progetto, potrebbe essere utile attivare l'avviso [C4746](../../error-messages/compiler-warnings/compiler-warning-c4746.md) per individuare i percorsi di codice che sono interessati dalla differenza nella semantica.

Non esiste alcun `#pragma` equivalente a questa opzione di controllo.

### <a name="to-set-the-volatile-compiler-option-in-visual-studio"></a>Per impostare il /volatile opzione del compilatore in Visual Studio

1. Aprire il **pagine delle proprietà** la finestra di dialogo per il progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Nel **opzioni aggiuntive** aggiungere **/volatile:iso** o **/volatile: MS** e quindi scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[volatile](../../cpp/volatile-cpp.md)  
[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
