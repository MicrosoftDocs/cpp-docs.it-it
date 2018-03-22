---
title: VCPROFILE_PATH | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VCPROFILE_PATH
dev_langs:
- C++
helpviewer_keywords:
- VCPROFILE_PATH environment variable
ms.assetid: 25217aa4-7e86-4eba-854d-10b3c457e4df
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ea682b70f4417ef49bfca530af5f12f21699a389
ms.sourcegitcommit: 5cd2e3e51ecc8d9fc0d889555b4bfa193ba1d6a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2018
---
# <a name="vcprofilepath"></a>VCPROFILE_PATH
Specificare la directory per creare i file pgc.  
  
## <a name="syntax"></a>Sintassi  
  
```  
VCPROFILE_PATH=path  
```  
  
#### <a name="parameters"></a>Parametri  
 `path`  
 Il percorso della directory in cui. pgc file verranno aggiunti.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, i file pgc vengono creati nella stessa directory del file binario sottoposto a profilatura.  Tuttavia, se il percorso assoluto del file binario non esiste, ad esempio il caso gli scenari di profilo vengono eseguiti in un computer diverso da in cui è stato compilato il binario, è possibile impostare `VCPROFILE_PATH` a un percorso esistente.  
  
## <a name="example"></a>Esempio  
  
```  
set VCPROFILE_PATH=c:\  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)