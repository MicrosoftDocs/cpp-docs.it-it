---
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
ms.openlocfilehash: b1927ffd2efc923157fe1956fe905c939bc62719
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57807884"
---
# <a name="order-put-functions-in-order"></a>/ORDER (Inserisce le funzioni in ordine)

Specificare l'ordine dei collegamenti per le funzioni di separatamente nel pacchetto (COMDAT).

## <a name="syntax"></a>Sintassi

> **/Order:\@**<em>nomefile</em>

### <a name="parameters"></a>Parametri

*filename*<br/>
Un file di testo che specifica l'ordine dei collegamenti per le funzioni COMDAT.

## <a name="remarks"></a>Note

Il **/ORDER** opzione del compilatore consente di ottimizzare il comportamento di paging del programma mediante il raggruppamento di una funzione con le funzioni da essa chiamate. È anche possibile raggruppare insieme le funzioni chiamate con maggiore frequenza. Queste tecniche, note come *ottimizzazione dello swap* oppure *ottimizzazione paging*, aumentano le probabilità che una funzione chiamata è in memoria quando è necessaria e non è necessario chiamarla dal disco.

Quando si compila il codice sorgente in un file di oggetto, è possibile indicare al compilatore di inserire ogni funzione nella relativa sezione, chiamata un' *COMDAT*, usando la [/Gy (Attiva collegamento a livello di funzione)](gy-enable-function-level-linking.md) compilatore opzione. Il **/ORDER** l'opzione del linker indica al linker di inserire dati COMDAT nell'immagine eseguibile in ordine sono state specificate.

Per specificare l'ordine COMDAT, creare un *file di risposta*, un file di testo che elenca ogni COMDAT in base al nome, uno per riga, nell'ordine di volerle inserire dal linker. Passare il nome di questo file come le *nomefile* parametro delle **/ORDER** opzione. Per le funzioni C++, il nome di COMDAT è la forma decorata del nome della funzione. Usare il nome non decorato per le funzioni C `main`, e per le funzioni C++ dichiarate come `extern "C"`. I nomi delle funzioni e i nomi decorati sono tra maiuscole e minuscole. Per altre informazioni sui nomi decorati, vedere [nomi decorati](decorated-names.md).

Per trovare i nomi decorati di COMDAT, utilizzare il [DUMPBIN](dumpbin-reference.md) dello strumento [/simboli](symbols.md) opzione nel file oggetto. Il linker viene automaticamente anteposto un carattere di sottolineatura (**\_**) alla funzione nomi nella risposta del file, a meno che il nome inizia con un punto interrogativo (**?**) o simbolo di chiocciola ( **\@**). Ad esempio, se un file di origine, cpp, contiene le funzioni `int cpp_func(int)`, `extern "C" int c_func(int)` e `int main(void)`, il comando `DUMPBIN /SYMBOLS example.obj` Elenca i nomi decorati:

```Output
...
088 00000000 SECT1A notype ()    External     | ?cpp_func@@YAHH@Z (int __cdecl cpp_func(int))
089 00000000 SECT22 notype ()    External     | _c_func
08A 00000000 SECT24 notype ()    External     | _main
...
```

In questo caso, specificare i nomi come `?cpp_func@@YAHH@Z`, `c_func`, e `main` nel file di risposta.

Se più oggetti **/ORDER** opzione viene visualizzata nelle opzioni del linker, l'ultimo metodo specificato ha effetto.

Il **/ORDER** disabilita il collegamento incrementale. È possibile visualizzare l'avviso del linker [LNK4075](../../error-messages/tool-errors/linker-tools-warning-lnk4075.md) quando si specifica questa opzione se il collegamento incrementale è abilitato o se è stato specificato il [/ZI (PDB incrementale)](z7-zi-zi-debug-information-format.md) opzione del compilatore. Per ignorare questo avviso, è possibile usare la [/INCREMENTAL: No](incremental-link-incrementally.md) l'opzione del linker per disattivare il collegamento incrementale e utilizzare il [/Zi (generare PDB)](z7-zi-zi-debug-information-format.md) opzione del compilatore per generare un file PDB senza collegamento incrementale.

> [!NOTE]
> COLLEGAMENTO non è possibile ordinare le funzioni statiche poiché i nomi delle funzioni statiche non sono i nomi dei simboli pubblici. Quando **/ORDER** è specificato, avviso del linker [LNK4037](../../error-messages/tool-errors/linker-tools-warning-lnk4037.md) viene generato per ogni simbolo nel file di risposta dell'ordine che è statico o non è stato trovato.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **ottimizzazione** pagina delle proprietà.

1. Modificare il **ordine funzioni** proprietà per contenere il nome del file di risposta.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.FunctionOrder%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
