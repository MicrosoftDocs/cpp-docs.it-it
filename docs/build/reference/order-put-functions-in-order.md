---
title: -ORDINE (inserisce le funzioni in ordine) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.FunctionOrder
- /order
dev_langs:
- C++
helpviewer_keywords:
- ORDER linker option
- -ORDER linker option
- LINK tool [C++], program optimizing
- /ORDER linker option
- LINK tool [C++], swap tuning
- paging, optimizing
ms.assetid: ecf5eb3e-e404-4e86-9a91-4e5ec157261a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2264296d288f9105a59c0ac5099c1dedef55ee2f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="order-put-functions-in-order"></a>/ORDER (Inserisce le funzioni in ordine)

Specificare l'ordine dei collegamenti per le funzioni di separatamente nel pacchetto (COMDAT).

## <a name="syntax"></a>Sintassi

>/ ORDINARE: @*filename*

### <a name="parameters"></a>Parametri

*filename*  
Un file di testo che specifica l'ordine dei collegamenti per le funzioni COMDAT.

## <a name="remarks"></a>Note

Il **/ORDER** l'opzione del compilatore consente di ottimizzare il comportamento di paging del programma mediante il raggruppamento di una funzione con le funzioni da essa chiamate. È anche possibile raggruppare insieme le funzioni di chiamata di frequente. Queste tecniche, note come *ottimizzazione dello swap* o *ottimizzazione paging*, aumentare la probabilità che una funzione chiamata è in memoria quando è necessaria e non dispone di paging dal disco.

Quando si compila il codice sorgente in un file oggetto, è possibile indicare al compilatore di inserire ogni funzione nella relativa sezione, chiamata un *COMDAT*, utilizzando il [/Gy (Attiva collegamento a livello di funzione)](../../build/reference/gy-enable-function-level-linking.md) compilatore opzione. Il **/ORDER** l'opzione del linker indica al linker di inserire dati COMDAT nell'immagine eseguibile, nell'ordine specificato.

Per specificare l'ordine COMDAT, creare un *file di risposta*, un file di testo che elenca ogni COMDAT per nome, uno per ogni riga, l'ordine in cui si desidera possano essere effettuate dal linker. Passare il nome di questo file come il *filename* parametro il **/ORDER** opzione. Per le funzioni C++, il nome di COMDAT è la forma decorata del nome della funzione. Utilizzare il nome non decorato per le funzioni C, `main`, e per le funzioni C++ dichiarate come `extern "C"`. I nomi delle funzioni e i nomi decorati sono tra maiuscole e minuscole. Per ulteriori informazioni sui nomi decorati, vedere [nomi decorati](../../build/reference/decorated-names.md). 

Per trovare i nomi decorati del COMDAT, utilizzare il [DUMPBIN](../../build/reference/dumpbin-reference.md) dello strumento [/simboli](../../build/reference/symbols.md) opzione nel file oggetto. Il linker viene automaticamente anteposto un carattere di sottolineatura (\_) alla funzione nomi nella risposta di file, a meno che il nome inizia con un punto interrogativo (?) o simbolo di chiocciola (@). Ad esempio, se un file di origine, example.cpp, contiene le funzioni `int cpp_func(int)`, `extern "C" int c_func(int)` e `int main(void)`, il comando `DUMPBIN /SYMBOLS example.obj` sono elencati i seguenti nomi decorati:

```Output
...
088 00000000 SECT1A notype ()    External     | ?cpp_func@@YAHH@Z (int __cdecl cpp_func(int))
089 00000000 SECT22 notype ()    External     | _c_func
08A 00000000 SECT24 notype ()    External     | _main
...
```

In questo caso, specificare i nomi come `?cpp_func@@YAHH@Z`, `c_func`, e `main` nel file di risposta.

Se più oggetti **/ORDER** opzione viene visualizzata nelle opzioni del linker, il penultimo specificato ha effetto.

Il **/ORDER** disabilita il collegamento incrementale. È possibile visualizzare l'avviso del linker [LNK4075](../../error-messages/tool-errors/linker-tools-warning-lnk4075.md) quando si specifica questa opzione se il collegamento incrementale è abilitato o se è stato specificato il [/ZI (incrementale PDB)](../../build/reference/z7-zi-zi-debug-information-format.md) l'opzione del compilatore. Per disattiva questo avviso, è possibile utilizzare il [/INCREMENTAL: No](../../build/reference/incremental-link-incrementally.md) per disattivare il collegamento incrementale e utilizzare l'opzione del linker di [/Zi (generare PDB)](../../build/reference/z7-zi-zi-debug-information-format.md) l'opzione del compilatore di generare un file PDB senza collegamento incrementale.

> [!NOTE]
> COLLEGAMENTO non è possibile ordinare funzioni statiche poiché i nomi delle funzioni statiche non sono nomi di simboli pubblici. Quando **/ORDER** è specificato, avviso del linker [LNK4037](../../error-messages/tool-errors/linker-tools-warning-lnk4037.md) viene generato per ogni simbolo nel file di risposta ordine che è statico o non è stato trovato.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  

1. In **le proprietà di configurazione**aprire **Linker** e quindi scegliere il **ottimizzazione** pagina delle proprietà.

1. Modificare il **ordine funzioni** proprietà per contenere il nome del file di risposta.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.FunctionOrder%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
[Opzioni del linker](../../build/reference/linker-options.md)