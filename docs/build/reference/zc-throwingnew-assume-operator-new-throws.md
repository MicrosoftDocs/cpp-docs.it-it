---
title: /Zc:throwingNew (Presupponi operatore Genera nuovo) | Documenti Microsoft
ms.custom: 
ms.date: 12/13/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- throwingNew
- /Zc:throwingNew
dev_langs: C++
helpviewer_keywords:
- -Zc compiler options (C++)
- throwingNew
- Assume operator new Throws
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 20ff0101-9677-4d83-8c7b-8ec9ca49f04f
caps.latest.revision: "1"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7cbcb635cd37a40c2de1599d271658de308e8cff
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zcthrowingnew-assume-operator-new-throws"></a>/Zc:throwingNew (Presupponi operatore nuovo genera un'eccezione)  
Quando il `/Zc:throwingNew` è specificata l'opzione, il compilatore ottimizza le chiamate a `operator new` per ignorare i controlli per un puntatore null restituito. Questa opzione indica al compilatore di supporre che tutti collegati le implementazioni di `operator new` e gli allocatori personalizzati conformi allo standard C++ e generano un errore di allocazione. Per impostazione predefinita in Visual Studio, il compilatore genera pessimistico controlli null (`/Zc:throwingNew-`) per queste chiamate, perché gli utenti possono creare collegamenti con un'implementazione non generanti di `operator new` o scrivere routine allocatore personalizzato che restituiscono puntatori null.  
  
## <a name="syntax"></a>Sintassi  
  
`/Zc:throwingNew`[`-`]  
  
## <a name="remarks"></a>Note  
  
Dall'ISO C++ 98, lo standard è specificato che il valore predefinito [operatore new](../../standard-library/new-operators.md#op_new) genera `std::bad_alloc` quando l'allocazione della memoria ha esito negativo. Versioni di Visual C++ fino a Visual Studio 6.0 ha restituito un puntatore null in un errore di allocazione. A partire da Visual Studio 2002, `operator new` conforme allo standard e genera un'eccezione in caso di errore. Per supportare il codice che utilizza lo stile di allocazione precedenti, Visual Studio fornisce un'implementazione di collegabile `operator new` in *nothrownew.obj* che restituisce un puntatore null in caso di errore. Per impostazione predefinita, il compilatore genera anche difensivo controlli null per impedire che queste allocatori nello stile precedente causa un arresto anomalo del sistema immediato in caso di errore. Il `/Zc:throwingNew` opzione indica al compilatore di tralasciare questi controlli null, presupponendo che tutti collegati memoria allocatori conforme allo standard. Non si applica a esplicita non generanti `operator new` overload, che vengono dichiarati tramite un parametro di tipo aggiuntivo `std::nothrow_t` ed esplicita `noexcept` specifica.  
  
Concettualmente, per creare un oggetto nell'archiviazione disponibile, il compilatore genera codice per allocare la memoria e quindi richiamare il costruttore per inizializzare la memoria. Poiché il compilatore Visual C++ in genere non è possibile stabilire se il codice sarà collegato a un allocatore non conforme, non generanti, per impostazione predefinita e genera inoltre un controllo null prima di chiamare il costruttore. In questo modo un puntatore null nella chiamata al costruttore di dereferenziazione se fallisce un'allocazione non generanti. Nella maggior parte dei casi, questi controlli non sono necessari, perché il valore predefinito `operator new` allocatori throw anziché restituire puntatori null. I controlli sono anche ingrati effetti collaterali. Essi sovraccarico la dimensione del codice e sono inondare predittive il ramo impediscono di altre ottimizzazioni del compilatore utile, ad esempio devirtualization o const propagazione dall'oggetto inizializzato. I controlli esistono solo al codice di supporto che si collega a *nothrownew.obj* o ha personalizzato non conformi `operator new` implementazioni. Se non si utilizza non conformi `operator new`, si consiglia di usare `/Zc:throwingNew` di ottimizzare il codice.  
  
Se esegue la compilazione con generazione di codice in fase di collegamento (LTCG), non devi specificare `/Zc:throwingNew`. Quando il codice viene compilato con /LTCG, il compilatore può rilevare se il valore predefinito, conformi `operator new` implementazione viene utilizzata. In questo caso, il compilatore lascia automaticamente i controlli null. Il linker cerca il `/ThrowingNew` flag per indicare se l'implementazione di `operator new` è conforme. È possibile specificare questo flag al linker includendo questa direttiva nell'origine per l'implementazione del nuovo operatore personalizzato:  
  
```cpp  
#pragma comment(linker, "/ThrowingNew")  
```  
  
Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
2.  Dal **configurazioni** menu a discesa scegliere **tutte le configurazioni**.  
3.  Selezionare il **le proprietà di configurazione**, **C/C++**, **riga di comando** pagina delle proprietà.  
4.  Modificare il **opzioni aggiuntive** proprietà da includere `/Zc:throwingNew` o `/Zc:throwingNew-` e quindi scegliere **OK**.  
  
## <a name="see-also"></a>Vedere anche  
[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
[/Zc (conformità)](../../build/reference/zc-conformance.md)  
[noexcept (C++)](../../cpp/noexcept-cpp.md)  
[Specifiche di eccezioni (generazione) (C++)](../../cpp/exception-specifications-throw-cpp.md)  
[Terminate (eccezione)](../../standard-library/exception-functions.md#terminate)  
