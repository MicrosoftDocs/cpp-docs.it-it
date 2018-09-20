---
title: threadprivate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- threadprivate
dev_langs:
- C++
helpviewer_keywords:
- threadprivate OpenMP directive
ms.assetid: 3515aaed-6f9d-4d59-85eb-342378bea2d3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a9313934744f6eae66736f25b0d0b8592743cf12
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46376980"
---
# <a name="threadprivate"></a>threadprivate

Specifica che una variabile privata di un thread.

## <a name="syntax"></a>Sintassi

```
#pragma omp threadprivate(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
Elenco delimitato da virgole di variabili che si desidera rendere privato a un thread. `var` deve essere una variabile globale o dello spazio dei nomi-con ambito o una variabile locale statica.

## <a name="remarks"></a>Note

Il `threadprivate` direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [2.7.1 direttiva threadprivate](../../../parallel/openmp/2-7-1-threadprivate-directive.md).

Il `threadprivate` direttiva si basa sul [thread](../../../cpp/thread.md) `__declspec` attributo; limiti sulle **declspec** si applicano a `threadprivate`.

Non è possibile usare `threadprivate` in qualsiasi DLL che verrà caricata mediante [LoadLibrary](https://msdn.microsoft.com/library/windows/desktop/ms684175).  Ciò include le DLL che siano state caricate [/DELAYLOAD (importazione a caricamento ritardato)](../../../build/reference/delayload-delay-load-import.md), che utilizza anch **LoadLibrary**.

È possibile usare `threadprivate` in una DLL che viene caricata in modo statico all'avvio del processo.

Poiché `threadprivate` basa **declspec**, un `threadprivate` variabile sarà presente in qualsiasi thread avviato nel processo, non solo i thread che fanno parte di un team di thread generato da un'area parallela.  Questo è un dettaglio di implementazione che è possibile essere a conoscenza, poiché è possibile notare, ad esempio, i costruttori per una `threadprivate` chiamato più spesso quindi previsto tipo definito dall'utente.

Oggetto `threadprivate` variabile di tipo destructable non è garantito che il relativo distruttore chiamato.  Ad esempio:

```
struct MyType
{
    ~MyType();
};

MyType threaded_var;
#pragma omp threadprivate(threaded_var)
int main()
{
    #pragma omp parallel
    {}
}
```

Gli utenti non hanno alcun controllo sulla quando terminerà il thread che costituisce l'area parallela.  Se tali thread esistano al momento della chiusura del processo, il thread non sarà necessario notificare l'uscita dal processo e non verrà chiamato il distruttore per `threaded_var` in qualsiasi thread ad eccezione di quello che viene chiuso (, il thread principale).  In modo da codice non deve influire sulla corretta distruzione di `threadprivate` variabili.

## <a name="example"></a>Esempio

Per un esempio d'uso `threadprivate`, vedere [private](../../../parallel/openmp/reference/private-openmp.md).

## <a name="see-also"></a>Vedere anche

[Direttive](../../../parallel/openmp/reference/openmp-directives.md)