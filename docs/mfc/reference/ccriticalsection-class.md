---
title: CCriticalSection Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCriticalSection
- AFXMT/CCriticalSection
- AFXMT/CCriticalSection::CCriticalSection
- AFXMT/CCriticalSection::Lock
- AFXMT/CCriticalSection::Unlock
- AFXMT/CCriticalSection::m_sect
dev_langs:
- C++
helpviewer_keywords:
- CCriticalSection [MFC], CCriticalSection
- CCriticalSection [MFC], Lock
- CCriticalSection [MFC], Unlock
- CCriticalSection [MFC], m_sect
ms.assetid: f776f74b-5b0b-4f32-9c13-2b8e4a0d7b2b
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: fd78fb7d86413185fc56971adf6868f65499be24
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="ccriticalsection-class"></a>CCriticalSection Class
Represents a "critical section" — a synchronization object that allows one thread at a time to access a resource or section of code.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CCriticalSection : public CSyncObject  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCriticalSection::CCriticalSection](#ccriticalsection)|Constructs a `CCriticalSection` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCriticalSection::Lock](#lock)|Use to gain access to the `CCriticalSection` object.|  
|[CCriticalSection::Unlock](#unlock)|Releases the `CCriticalSection` object.|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CCriticalSection::operator CRITICAL_SECTION*](#operator_critical_section_star)|Retrieves a pointer to the internal **CRITICAL_SECTION** object.|  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CCriticalSection::m_sect](#m_sect)|A **CRITICAL_SECTION** object.|  
  
## <a name="remarks"></a>Remarks  
 Critical sections are useful when only one thread at a time can be allowed to modify data or some other controlled resource. For example, adding nodes to a linked list is a process that should only be allowed by one thread at a time. By using a `CCriticalSection` object to control the linked list, only one thread at a time can gain access to the list.  
  
> [!NOTE]
>  The functionality of the `CCriticalSection` class is provided by an actual Win32 **CRITICAL_SECTION** object.  
  
 Critical sections are used instead of mutexes (see [CMutex](../../mfc/reference/cmutex-class.md)) when speed is critical and the resource will not be used across process boundaries.  
  
 There are two methods for using a `CCriticalSection` object: stand-alone and embedded in a class.  
  
-   Stand-alone method   To use a stand-alone `CCriticalSection` object, construct the `CCriticalSection` object when it is needed. After a successful return from the constructor, explicitly lock the object with a call to [Lock](#lock). Call [Unlock](#unlock) when you are done accessing the critical section. This method, while clearer to someone reading your source code, is more prone to error as you must remember to lock and unlock the critical section before and after access.  
  
     A more preferable method is to use the [CSingleLock](../../mfc/reference/csinglelock-class.md) class. It also has a `Lock` and `Unlock` method, but you don't have to worry about unlocking the resource if an exception occurs.  
  
-   Embedded method   You can also share a class with multiple threads by adding a `CCriticalSection`-type data member to the class and locking the data member when needed.  
  
 For more information on using `CCriticalSection` objects, see the article [Multithreading: How to Use the Synchronization Classes](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CCriticalSection`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxmt.h  
  
##  <a name="ccriticalsection"></a>  CCriticalSection::CCriticalSection  
 Constructs a `CCriticalSection` object.  
  
```  
CCriticalSection();
```  
  
### <a name="remarks"></a>Remarks  
 To access or release a `CCriticalSection` object, create a [CSingleLock](../../mfc/reference/csinglelock-class.md) object and call its [Lock](../../mfc/reference/csinglelock-class.md#lock) and [Unlock](../../mfc/reference/csinglelock-class.md#unlock) member functions. If the `CCriticalSection` object is being used stand-alone, call its [Unlock](#unlock) member function to release it.  
  
 If the constructor fails to allocate the required system memory, a memory exception (of type [CMemoryException](../../mfc/reference/cmemoryexception-class.md)) is automatically thrown.  
  
### <a name="example"></a>Example  
  See the example for [CCriticalSection::Lock](#lock).  
  
##  <a name="lock"></a>  CCriticalSection::Lock  
 Call this member function to gain access to the critical section object.  
  
```  
BOOL Lock();  
BOOL Lock(DWORD dwTimeout);
```  
  
### <a name="parameters"></a>Parameters  
 `dwTimeout`  
 `Lock` ignores this parameter value.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the function was successful; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 `Lock` is a blocking call that will not return until the critical section object is signaled (becomes available).  
  
 If timed waits are necessary, you can use a [CMutex](../../mfc/reference/cmutex-class.md) object instead of a `CCriticalSection` object.  
  
 If `Lock` fails to allocate the necessary system memory, a memory exception (of type [CMemoryException](../../mfc/reference/cmemoryexception-class.md)) is automatically thrown.  
  
### <a name="example"></a>Example  
 This example demonstrates the nested critical section approach by controlling access to a shared resource (the static `_strShared` object) using a shared `CCriticalSection` object. The `SomeMethod` function demonstrates updating a shared resource in a safe manner.  
  
 [!code-cpp[NVC_MFC_Utilities#11](../../mfc/codesnippet/cpp/ccriticalsection-class_1.h)]  
  
##  <a name="m_sect"></a>  CCriticalSection::m_sect  
 Contains a critical section object that is used by all `CCriticalSection` methods.  
  
```  
CRITICAL_SECTION m_sect;  
```  
  
##  <a name="operator_critical_section_star"></a>  CCriticalSection::operator CRITICAL_SECTION*  
 Retrieves a **CRITICAL_SECTION** object.  
  
```  
operator CRITICAL_SECTION*();
```   
  
### <a name="remarks"></a>Remarks  
 Call this function to retrieve a pointer to the internal **CRITICAL_SECTION** object.  
  
##  <a name="unlock"></a>  CCriticalSection::Unlock  
 Releases the `CCriticalSection` object for use by another thread.  
  
```  
BOOL Unlock();
```  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the `CCriticalSection` object was owned by the thread and the release was successful; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 If the `CCriticalSection` is being used stand-alone, `Unlock` must be called immediately after completing use of the resource controlled by the critical section. If a [CSingleLock](../../mfc/reference/csinglelock-class.md) object is being used, `CCriticalSection::Unlock` will be called by the lock object's `Unlock` member function.  
  
### <a name="example"></a>Example  
  See the example for [CCriticalSection::Lock](#lock).  
  
## <a name="see-also"></a>See Also  
 [CSyncObject Class](../../mfc/reference/csyncobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CMutex Class](../../mfc/reference/cmutex-class.md)

