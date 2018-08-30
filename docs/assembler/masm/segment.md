---
title: SEGMENT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- SEGMENT
dev_langs:
- C++
helpviewer_keywords:
- SEGMENT directive
ms.assetid: e6f68367-6714-4f06-a79c-edfa88014430
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f5defce11b611f23b67e5e44ac1b9d406f73c0ae
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43210419"
---
# <a name="segment"></a>SEGMENT
Definisce un segmento di programma chiamato *nome* presenza di attributi di segmento  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
   name SEGMENT [[READONLY]] [[align]] [[combine]] [[use]] [[characteristics]] ALIAS(string) [['class']]  
statements  
name ENDS  
```  
  
#### <a name="parameters"></a>Parametri  
 *align*  
 L'intervallo di indirizzi di memoria da cui è possibile selezionare un indirizzo iniziale per il segmento. Il tipo di allineamento può essere uno dei seguenti:  
  
|Allinea tipo|Indirizzo iniziale|  
|----------------|----------------------|  
|**BYTE**|Indirizzo dei byte disponibile successivo.|  
|**WORD**|Indirizzo successivo disponibile word (2 byte per ogni parola).|  
|**DWORD**|Indirizzo successivo disponibile valore double word (4 byte per ogni parola doppia).|  
|**PARA**|Indirizzo disponibile paragrafo successivo (16 byte per ogni paragrafo).|  
|**PAGE**|Indirizzo pagina disponibile successivo (256 byte per pagina).|  
|**ALIGN**(*n*)|Successivo disponibile *n*indirizzo byte th. Per altre informazioni vedere la sezione Osservazioni.|  
  
 Se questo parametro viene omesso, **PARA** viene usato per impostazione predefinita.  
  
 *combine*  
 **Pubblica**, **STACK**, **comuni**, **memoria**, **in**<em>indirizzo</em>, **Privata**  
  
 *use*  
 **USE16**, **USE32**, **FLAT**  
  
 `characteristics`  
 **INFO**, **leggere**, **scrivere**, **EXECUTE**, **condiviso**, **NOPAGE**, **NOCACHE**, e **annullare**  
  
 Queste sono supportate solo per COFF e corrispondono alle caratteristiche di sezione COFF di nome simile (ad esempio, **condiviso** corrisponde a IMAGE_SCN_MEM_SHARED). LETTURA imposta il flag IMAGE_SCN_MEM_READ. Il flag di sola lettura obsoleto ha causato la sezione per cancellare il flag IMG_SCN_MEM_WRITE. Se qualsiasi `characteristics` vengono impostate, non vengono utilizzate le caratteristiche predefinite e solo i flag specificati dal programmatore restano validi.  
  
 `ALIAS(` `string` `)`  
 Questa stringa viene utilizzata come nome della sezione nell'oggetto COFF generato.  Crea più sezioni con lo stesso nome esterno, con i nomi distinti segmento MASM.  
  
 Non supportato con **/omf**.  
  
 `class`  
 Designa come segmenti devono essere combinati e ordinati nel file assemblato. I valori tipici sono, `'DATA'`, `'CODE'`, `'CONST'` e `'STACK'`  
  
## <a name="remarks"></a>Note  
 Per la `ALIGN(n)`, `n` può essere qualsiasi potenza di 2 da 1 a 8192; non è supportata con **/omf**.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)