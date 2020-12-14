---
description: Altre informazioni su:/ORDER (inserisce le funzioni in ordine)
title: /ORDER (Inserisce le funzioni in ordine)
ms.date: 09/05/2018
f1_keywords:
- VC.Project.VCLinkerTool.FunctionOrder
- /order
helpviewer_keywords:
- ORDER linker option
- -ORDER linker option
- LINK tool [C++], program optimizing
- /ORDER linker option
- LINK tool [C++], swap tuning
- paging, optimizing
ms.assetid: ecf5eb3e-e404-4e86-9a91-4e5ec157261a
ms.openlocfilehash: 36888cbb24c869d06eaaa5830b95ae76fc42b860
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226350"
---
# <a name="order-put-functions-in-order"></a>/ORDER (Inserisce le funzioni in ordine)

Consente di specificare l'ordine dei collegamenti per le funzioni in pacchetto separate (COMDAT).

## <a name="syntax"></a>Sintassi

> **/Order: \@** <em>nome file</em>

### <a name="parameters"></a>Parametri

*filename*<br/>
File di testo che specifica l'ordine dei collegamenti per le funzioni COMDAT.

## <a name="remarks"></a>Commenti

L'opzione del compilatore **/Order** consente di ottimizzare il comportamento di paging del programma raggruppando una funzione insieme alle funzioni da essa chiamate. È anche possibile raggruppare le funzioni chiamate spesso insieme. Queste tecniche, note come ottimizzazione di *scambio* o di paging, aumentano la probabilità che una funzione chiamata si trovi in memoria quando è necessaria e non è necessario eseguire il *paging* dal disco.

Quando si compila il codice sorgente in un file oggetto, è possibile indicare al compilatore di inserire ogni funzione nella relativa sezione, denominata *COMDAT*, usando l'opzione del compilatore [/Gy (Abilita collegamento a livello di funzione)](gy-enable-function-level-linking.md) . L'opzione del linker **/Order** indica al linker di inserire COMDAT nell'immagine eseguibile nell'ordine specificato.

Per specificare l'ordine COMDAT, creare un *file di risposta*, un file di testo che elenca ogni COMDAT per nome, uno per riga, nell'ordine in cui si desidera che vengano posizionati dal linker. Passare il nome del file come parametro *filename* dell'opzione **/Order** . Per le funzioni C++, il nome di un COMDAT è il formato decorato del nome della funzione. Usare il nome non decorato per le funzioni C, `main` e per le funzioni C++ dichiarate come `extern "C"` . Per i nomi di funzione e i nomi decorati viene fatta distinzione tra maiuscole Per ulteriori informazioni sui nomi decorati, vedere [nomi decorati](decorated-names.md).

Per trovare i nomi decorati della COMDAT, usare l'opzione [/symbols](symbols.md) dello strumento [dumpbin](dumpbin-reference.md) nel file oggetto. Il linker antepone automaticamente un carattere di sottolineatura ( **\_** ) ai nomi di funzione nel file di risposta, a meno che il nome non inizi con un punto interrogativo (**?**) o chiocciola ( **\@** ). Se, ad esempio, un file di origine, ad esempio. cpp, contiene funzioni `int cpp_func(int)` `extern "C" int c_func(int)` e `int main(void)` , il comando `DUMPBIN /SYMBOLS example.obj` Elenca i nomi decorati:

```Output
...
088 00000000 SECT1A notype ()    External     | ?cpp_func@@YAHH@Z (int __cdecl cpp_func(int))
089 00000000 SECT22 notype ()    External     | _c_func
08A 00000000 SECT24 notype ()    External     | _main
...
```

In questo caso, specificare i nomi come `?cpp_func@@YAHH@Z` , `c_func` e `main` nel file di risposta.

Se nelle opzioni del linker è presente più di un'opzione **/Order** , l'ultimo oggetto specificato avrà effetto.

L'opzione **/Order** Disabilita il collegamento incrementale. È possibile che venga visualizzato l'avviso del linker [LNK4075](../../error-messages/tool-errors/linker-tools-warning-lnk4075.md) quando si specifica questa opzione se è abilitato il collegamento incrementale o se è stata specificata l'opzione del compilatore [/Zi (incrementale PDB)](z7-zi-zi-debug-information-format.md) . Per ignorare questo avviso, è possibile usare l'opzione [/incremental: No](incremental-link-incrementally.md) linker per disattivare il collegamento incrementale e usare l'opzione del compilatore [/Zi (generate PDB)](z7-zi-zi-debug-information-format.md) per generare un PDB senza collegamento incrementale.

> [!NOTE]
> Il collegamento non può ordinare le funzioni statiche perché i nomi delle funzioni statiche non sono nomi di simboli pubblici. Quando si specifica **/Order** , viene generato un avviso del linker [LNK4037](../../error-messages/tool-errors/linker-tools-warning-lnk4037.md) per ogni simbolo nel file di risposta dell'ordine che è statico o non trovato.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà di ottimizzazione del **linker** delle proprietà di configurazione  >   .

1. Modificare la proprietà **Order della funzione** in modo che contenga il nome del file di risposta.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.FunctionOrder%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
