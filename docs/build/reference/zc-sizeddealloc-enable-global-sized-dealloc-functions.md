---
title: /Zc:sizedDealloc (abilitare globale funzioni deallocazione con dimensione) | Documenti Microsoft
ms.custom: 
ms.date: 12/13/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- sizedDealloc
- /Zc:sizedDealloc
dev_langs: C++
helpviewer_keywords:
- -Zc compiler options (C++)
- sizedDealloc
- Enable Global Sized Deallocation Functions
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 3a73ace0-4d36-420a-b699-0ca6fc0dd134
caps.latest.revision: "1"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1343c037f87aee609de2b082cb87f7f1f2832221
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zcsizeddealloc-enable-global-sized-deallocation-functions"></a>/Zc:sizedDealloc (abilitare globale funzioni deallocazione con dimensione)  
Il `/Zc:sizedDealloc` l'opzione del compilatore indica al compilatore di chiamare preferibilmente globale `operator delete` o `operator delete[]` funzioni che hanno un secondo parametro di tipo `size_t` quando la dimensione dell'oggetto è disponibile. Queste funzioni è possono utilizzare il `size_t` parametro per ottimizzare le prestazioni deallocatore.   
  
## <a name="syntax"></a>Sintassi  
`/Zc:sizedDealloc`[`-`\]  
  
## <a name="remarks"></a>Note  
  
In C++ 11 standard, è possibile definire le funzioni membro statiche `operator delete` e `operator delete[]` che accetta un secondo, `size_t` parametro. In genere questi vengono utilizzati in combinazione con [operatore new](../../cpp/new-operator-cpp.md) funzioni per implementare più efficiente di allocatori e deallocatori per l'oggetto. Tuttavia, C++ 11 non ha definito un set equivalente di funzioni di deallocazione in ambito globale. In C++ 11, deallocazione globale funzioni che hanno un secondo parametro di tipo `size_t` sono considerate funzioni delete di posizionamento. Deve essere chiamati in modo esplicito passando un argomento di dimensione.  
  
La standard C++ 14 modifica il comportamento del compilatore. Quando si definiscono globale `operator delete` e `operator delete[]` che accetta un secondo parametro di tipo `size_t`, il compilatore si preferisce chiamare queste funzioni quando le versioni ambito dei membri non vengono richiamate e la dimensione dell'oggetto è disponibile. Il compilatore passa l'argomento di dimensione in modo implicito. Le versioni con singolo argomento vengono chiamate quando il compilatore non è possibile determinare le dimensioni dell'oggetto venga deallocato. In caso contrario, le regole generali per la scelta la versione della funzione di deallocazione per richiamare vengono mantenuti. Le chiamate alle funzioni globali possono essere specificate in modo esplicito facendo precedere l'operatore di risoluzione ambito (`::`) alla chiamata di funzione di deallocazione.  
  
Per impostazione predefinita, Visual C++ a partire da Visual Studio 2015 implementa questo C++ 14 comportamento standard. È possibile specificare in modo esplicito questo impostando il `/Zc:sizedDealloc` l'opzione del compilatore. Rappresenta una potenziale interruzione modifica. Utilizzare il `/Zc:sizedDealloc-` opzione per mantenere il comportamento precedente, ad esempio, quando il codice definisce gli operatori delete di posizionamento che utilizzano un secondo parametro di tipo `size_t`. Le implementazioni della libreria di Visual Studio predefinite delle funzioni globali di deallocazione con il secondo parametro di tipo `size_t` richiamare le versioni con singolo parametro. Se il codice non fornisca solo a parametro singolo globale operatore delete e l'operatore delete [], le funzioni globali di richiamare le implementazioni della libreria predefinita delle funzioni di deallocazione con dimensione globale.  
  
Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
2.  Dal **configurazioni** menu a discesa scegliere **tutte le configurazioni**.  
3.  Selezionare il **le proprietà di configurazione**, **C/C++**, **riga di comando** pagina delle proprietà.  
4.  Modificare il **opzioni aggiuntive** proprietà da includere `/Zc:sizedDealloc` o `/Zc:sizedDealloc-` e quindi scegliere **OK**.  
  
## <a name="see-also"></a>Vedere anche  
[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
[/Zc (conformità)](../../build/reference/zc-conformance.md)  
